# solve.sh

一键编译、运行 C++ 代码，并测量执行时间与内存峰值 —— 为 ACM/ICPC 竞赛和算法练习打造的 Shell 脚本。

<!-- Badge Row 1: Core Info -->
[![GitHub](https://img.shields.io/badge/GitHub-thintime--dev-181717?logo=github)](https://github.com/thintime-dev/dotfiles)
[![Version](https://img.shields.io/badge/version-1.0.0-orange)](https://github.com/thintime-dev/dotfiles)

<!-- Badge Row 2: Platforms -->
[![Linux](https://img.shields.io/badge/Linux-FCC624?logo=linux&logoColor=black)](https://github.com/thintime-dev/dotfiles)

<!-- Badge Row 3: License -->
[![License](https://img.shields.io/badge/License-MIT-BD2D2D)](LICENSE)

## 目录

- [solve.sh](#solvesh)
  - [目录](#目录)
  - [简介](#简介)
  - [功能特点](#功能特点)
  - [前置要求](#前置要求)
  - [快速开始](#快速开始)
  - [使用方法](#使用方法)
    - [基本用法](#基本用法)
    - [输入输出都重定向](#输入输出都重定向)
    - [都不重定向](#都不重定向)
  - [参数说明](#参数说明)
  - [项目目录约定](#项目目录约定)

## 简介

打比赛时每次手动敲 `g++ a.cpp -o a && ./a < ../test/in.txt` 太烦了。`solve.sh` 把编译、运行、计时、测内存全部打包成一条命令，省去重复劳动。

## 功能特点

- **一键编译运行** — 自动调用 g++ 编译并执行，无需手敲编译命令
- **输入/输出重定向** — 比赛时自定义是否从文件读入、写出到文件，操作方便高效
- **运行时间测量** — 毫秒级计时，快速评估算法效率
- **内存峰值统计** — 使用 `/usr/bin/time` 获取实际内存占用
- **编译参数优化** — 默认启用 C++23、O2 优化、`DLOCAL` 调试宏

## 前置要求

| 依赖 | 说明 |
|------|------|
| `g++` | GCC 编译器（需支持 C++23） |
| `bc` | 内存单位换算 |
| `bash` | 脚本运行环境 |

## 快速开始

1. 将仓库克隆到本地并进入 `script/` 目录：

```bash
git clone git@github.com:thintime-dev/dotfiles.git
cd dotfiles/script
```

2. 在 `script/` 同级目录下新建 `test/` 文件夹，放入测试用例 `in.txt`：

```bash
mkdir -p ../test
echo "1 2" > ../test/in.txt
```

3. 在同目录下编写你的 C++ 代码，例如 `a.cpp`：

```cpp
#include <bits/stdc++.h>

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int a, b;
  std::cin >> a >> b;
  std::cout << a + b << '\n';

  return 0;
}

```

4. 运行脚本：

```bash
./solve.sh a
```

## 使用方法

### 基本用法

```bash
./solve.sh <程序名>
```

编译 `a.cpp`，输入从 `../test/in.txt` 读取，输出打印到终端：

```bash
./solve.sh a
```

### 输入输出都重定向

```bash
./solve.sh a 1 1
```

编译 `a.cpp`，输入从 `../test/in.txt` 读取，输出写入 `../test/out.txt` 并在终端显示。

### 都不重定向

```bash
./solve.sh a 0 0
```

编译后直接运行，手动输入数据。

## 参数说明

```
用法: ./solve.sh <程序名(不带.cpp后缀)> [输入重定向(0/1) 输出重定向(0/1)]
```

| 参数 | 说明 | 默认值 |
|------|------|--------|
| 程序名 | `.cpp` 文件名（不含后缀） | 必填 |
| 输入重定向 | `1` 从文件读取，`0` 手动输入 | `1` |
| 输出重定向 | `1` 写入文件，`0` 终端输出 | `0` |

## 项目目录约定

`solve.sh` 假设以下目录结构：

```
Code/
├── script/
│   └── solve.sh          # 脚本本体
├── test/
│   ├── in.txt            # 输入用例
│   └── out.txt           # 输出结果（由脚本生成）
├── a.cpp                 # 源代码
└── bin/
    └── a                 # 编译产物（由脚本生成，C++23, O2）
```

> `bin/` 和 `test/` 需自行创建，脚本会自动创建 `bin/` 目录。