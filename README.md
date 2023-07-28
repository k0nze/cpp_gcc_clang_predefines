# C++ GCC/Clang Predefines 

[![CI](https://github.com/k0nze/cpp_gcc_clang_predefines/actions/workflows/ci.yml/badge.svg)](https://github.com/k0nze/cpp_gcc_clang_predefines/actions/workflows/ci.yml)
[![License](https://img.shields.io/badge/License-BSD_3--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)

## Build & Run

```bash
cd build
cmake -GNinja ..
ninja
./main
```

## Get List of Predefines of GCC and Clang

```bash
gcc -dM -E -x c /dev/null
```

`gcc` sets `__GNUC__`

```bash
clang -dM -E -x c /dev/null
```

`clang` sets `__clang__` and `__GNUC__`
