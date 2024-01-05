# Task: 0-Preprocessor

> **create the** _0-preprocessor_ file

1. export the variable system wide
   ```bash
   export CFILE=main.c
   ```
2. Preprocess the CFILE
   ```bash
   gcc -E $CFILE
   ```
3. change permission:
   ```bash
   chmod a+x 0-preprocessor
   ```
4. execute the script
   ```bash
   ./0-prprocessor
   ```
   > file: [0-preprocessor](0-preprocessor)

# Task: 1-compiler

> **create the** _1-compiler file_

1. export the variable system wide
   ```bash
   export CFILE=main.c
   ```
2. Compile the CFILE
   ```bash
   gcc -c $CFILE
   ```
3. change permission:
   ```bash
   chmod a+x 1-compiler
   ```
4. execute the script

   ```bash
   ./1-compiler
   ```

   > file: [1-compiler](1-compiler)

# Task: 2-assembler

> **create the** _2-assembler file_

1. export the variable system wide
   ```bash
   export CFILE=main.c
   ```
2. Compile the CFILE
   ```bash
   gcc -S $CFILE
   ```
3. change permission:
   ```bash
   chmod a+x 2-assembler
   ```
4. execute the script

   ```bash
   ./2-assembler
   ```

   > file: [2-assembler](2-assembler)

# Task: 3-name

> **create the** _3-name file_

1. export the variable system wide
   ```bash
   export CFILE=main.c
   ```
2. Compiles the CFILE
   ```bash
   gcc $CFILE -o cisfun
   ```
3. change permission:
   ```bash
   chmod a+x 3-name
   ```
4. execute the script
   ```bash
   ./3-name
   ```
   > file: [3-name](3-name)

# Task: 4-puts.c

> **create the** _4-puts file_

1. compile the 4-puts.c source file
   ```c
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c
   ```
   > file: [4-puts.c](4-puts.c)

# Task: 5-printf.c

> **create the** _ 5-printf.c file_

1. compile the  5-printf.c source file
   ```c
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89  5-printf.c
   ```
   > file: [ 5-printf.c]( 5-printf.c)
