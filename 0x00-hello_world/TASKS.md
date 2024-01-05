# Task: 0-Preprocessor

- Write a script that runs file through the preprocessor and save the result into another file

  - **TODO:**
    1. File name is saved the variable `$CFILE`
    2. output is should be saved in the file `c`

# Task: 1-compiler

- Write a script that compiled a C file but does not link.
  - **TODO:**
    1. File name is saved the variable `$CFILE`
    2. The output should be named the same as the C file but with the extension `.o` instead of .c
       - example main.c output -> main.o

# Task: 2-assembler

- Write a script that generates the assembly code of a C code and save it in an output
  - **TODO:**
    1. File name is saved the variable `$CFILE`
    2. The output should be named the same as the C file but with the extension `.s` instead of .c
       - example main.c output -> main.s

# Task: 3-name

- write a script that compiles a c file and creates an executable named `cisfun`
  - **TODO:**
    1. The c source file will be saved in the variable `$CFILE`
    2. The output should be named `cisfun`
       - example main.c output -> cisfun

# Task: 4-puts

- write a C program that prints exactly `Programming is like building a multilingual puzzle` followed by a new line
  - **TOD:**
    1. use the function `puts`
    2. not alowed to use `printf`
    3. should end with the value `0`

# Task: 5-printf.c

- Write a C program that prints exactly `with proper grammer, but the outcome is a piece of art` followed by a new line
  - **TODO**
    1. use the function `printf`
    2. not allowed to use `puts`
    3. program should return `0`
    4. should compile without warning using the `-Wall gcc` option

# Task: 6-size.c

- write a C program that prints the size of various types on the computer it is compiled and run on.
  - **TODO:**
    1. Warning are allowed
    2. should return `0`
    3. You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option -:archlinux: `lib32-gcc-libs`

# Task: 7-intel

- write a script that generates the assembly code (intel syntax) of a C code and save it in an output file
  - **TODO:**
    1. The C file name will be saved in the variable `$CFILE`
    2. The output file should be names as the C file but with the extension `.s`
       1. main.c -> main.s
