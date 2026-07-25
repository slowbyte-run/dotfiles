#!/bin/bash

# 检查是否提供了参数
if [ $# -eq 0 ]; then
    echo "用法: $0 <程序名(不带.cpp后缀)> [输入重定向(0/1) 输出重定向(0/1)]"
    echo "示例:"
    echo "  $0 a          # 默认: 输入重定向(1), 输出不重定向(0)"
    echo "  $0 a 1 1     # 输入输出都重定向"
    echo "  $0 a 0 0     # 都不重定向"
    exit 1
fi

# 获取参数并处理
BASE_NAME="$1"
CPP_FILE="$BASE_NAME.cpp"

# 设置默认值: 输入重定向(1), 输出不重定向(0)
REDIRECT_INPUT=${2:-1}
REDIRECT_OUTPUT=${3:-0}

# 获取脚本所在目录
SCRIPT_DIR=$(dirname "$(readlink -f "$0")")
BIN_DIR="$SCRIPT_DIR/../bin"
OUTPUT_EXE="$BIN_DIR/$BASE_NAME"
INPUT_FILE="$SCRIPT_DIR/../test/in.txt"
OUTPUT_FILE="$SCRIPT_DIR/../test/out.txt"
TEMP_TIME="$SCRIPT_DIR/temp_time.txt"

# 创建bin目录如果不存在
mkdir -p "$BIN_DIR"

# 检查C++文件是否存在
if [ ! -f "$CPP_FILE" ]; then
    echo "错误: 找不到C++文件 $CPP_FILE"
    exit 1
fi

# 检查输入文件是否存在
if [ $REDIRECT_INPUT -eq 1 ] && [ ! -f "$INPUT_FILE" ]; then
    echo "错误: 找不到输入文件 $INPUT_FILE"
    exit 1
fi

# 编译C++文件
echo "正在编译 $CPP_FILE ..."
g++ -std=c++23 -Wall -Wextra -DLOCAL -pedantic -O2 -o "$OUTPUT_EXE" "$CPP_FILE"

if [ $? -ne 0 ]; then
    echo "编译失败!"
    exit 1
fi

echo "编译成功，正在运行程序..."
echo "----------------------------------------"

# 运行并测量时间
start_time=$(date +%s%3N)

if [ $REDIRECT_INPUT -eq 1 ]; then
    if [ $REDIRECT_OUTPUT -eq 1 ]; then
        "$OUTPUT_EXE" < "$INPUT_FILE" > "$OUTPUT_FILE" 2>&1
        cat "$OUTPUT_FILE"
    else
        "$OUTPUT_EXE" < "$INPUT_FILE" 2>&1
    fi
else
    if [ $REDIRECT_OUTPUT -eq 1 ]; then
        "$OUTPUT_EXE" > "$OUTPUT_FILE" 2>&1
        cat "$OUTPUT_FILE"
    else
        "$OUTPUT_EXE" 2>&1
    fi
fi

end_time=$(date +%s%3N)

# 单独测量内存使用
if [ $REDIRECT_INPUT -eq 1 ]; then
    MEM_USAGE=$(/usr/bin/time -f "%M" "$OUTPUT_EXE" < "$INPUT_FILE" >/dev/null 2> "$TEMP_TIME")
else
    MEM_USAGE=$(/usr/bin/time -f "%M" "$OUTPUT_EXE" >/dev/null 2> "$TEMP_TIME")
fi

# 处理输出
runtime=$((end_time - start_time))
mem_usage_kb=$(cat "$TEMP_TIME")
mem_usage_mb=$(echo "scale=2; $mem_usage_kb/1024" | bc)

echo "----------------------------------------"
echo "运行时间: ${runtime} ms"
echo "内存峰值: ${mem_usage_mb} MB"
echo "----------------------------------------"

# 清理临时文件
rm -f "$TEMP_TIME"