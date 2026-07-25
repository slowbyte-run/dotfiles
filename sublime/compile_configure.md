## FastOlympicCoding

```txt
{
  "run_settings": [
    {
      "name": "C++",
      "extensions": ["cpp"],

      "compile_cmd": "clang++ \"{source_file}\" -std=c++23 -DLOCAL -O2 -o \"{source_file_dir}/../bin/{file_name}\"",
      // "compile_cmd": "g++ \"{source_file}\" -std=gnu++20 -O2 -o \"${folders}/bin/{file_name}\"",

      "run_cmd": "\"{source_file_dir}/../bin/{file_name}\" {args}",
      // "run_cmd": "\"${folders}/bin/{file_name}\" {args}",

      "lint_compile_cmd": "clang++ -std=c++23 \"{source_file}\" -I \"{source_file_dir}\""
    },
    {
      "name": "Python",
      "extensions": ["py"],
      "compile_cmd": null,
      "run_cmd": "python '{source_file}'"
    },
    {
      "name": "Java",
      "extensions": ["java"],
      "compile_cmd": "javac -J-Dfile.encoding=utf8 -d \"{source_file_dir}/../bin\" \"{source_file}\"",
      "run_cmd": "java -classpath \"{source_file_dir}/../bin\" \"{file_name}\""
    }
  ],
  // 样例后缀（默认即可，或按需修改）
  "tests_file_suffix": "__tests",
  "tests_relative_dir": "test_case"
}
```

