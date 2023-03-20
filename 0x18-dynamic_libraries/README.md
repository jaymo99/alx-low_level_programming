# 0x18. C - Dynamic libraries

## Resources
* [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://intranet.alxswe.com/rltoken/XLLmLISlteUIxrLzNdm3_Q)
* [create dynamic libraries on Linux](https://intranet.alxswe.com/rltoken/JEqzgE_pPe48rvbspGL-2g)
* [Technical Writing](https://intranet.alxswe.com/rltoken/dAV47Y4Iulj75aeSxpYHbQ)

## General Learning Objectives
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable `$LD_LIBRARY_PATH` and how to use it
* What are the differences between static and shared libraries
* Basic usage `nm`, `ldd`, `ldconfig`

## How To Create A Dynamic Library
1. Type command `gcc *.c -c -fPIC` and hit return
	* This command generates one object file `.o` for each source file `.c`
	* The -fPIC flag ensures that the code is position-independent.
	* The -c option ensures that each .o file is compiled but not linked yet

2. Next type the following command `gcc *.o -shared -o libdynamic.so` (substitute your desired library name with `dynamic`) and hit return.
	* The wildcard \* tells the compiler to compile all the .o files into a dynamic library which is specified by the -shared flag.
	* The naming convention for dynamic libraries is such that each shared library name must start with lib and end with .so.

3. Finally we need to export the path for libraries so that programs know where to look for them by executing the following command: `export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH`


## Using Dynamic Libraries
You can compile your code as follows:
`gcc -L test_code.c -ldynamic -o test_code`

* It is worth noting that your source code, test_code.c in this case, needs to be listed before the -l flag.
* The expression, -l combined with `dynamic` tells the compiler to look for a dynamic library called `libdynamic.so`
* The -L flag tells the compiler to look in the current directory for the library file. This is why it is important to use the standard format for naming dynamic libraries.
