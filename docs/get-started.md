# Getting Started

To start using C++, we need two things:

- A compiler
- A text editor

## Compiler

For Windows users, we can use the [WinLibs](https://winlibs.com) standalone build of [GCC](https://gcc.gnu.org) and [MinGW-w64](https://www.mingw-w64.org).

Let's get the Universal C Runtime version from [WinLibs](https://winlibs.com). As of September 2022, the latest version is `GCC 12.2.0 + LLVM/Clang/LLD/LLDB 14.0.6 + MinGW-w64 10.0.0 (UCRT) - release 2`.

Download the zip file and extract to a preferable location. Then add the path of that preferable location in the `PATH` environment variable.

To verify the installation of compiler, open a new terminal and run

    g++ -v

If the version displays, we are good to go.

## Text Editor

We recommend using [Visual Studio Code](https://code.visualstudio.com) as the coding interface. Also make sure we install the `C/C++` extension.
