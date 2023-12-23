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
2. Preprocess the CFILE
   ```bash
   gcc -S $CFILE
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
