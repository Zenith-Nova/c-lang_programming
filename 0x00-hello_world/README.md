# 0x00. C - Hello, World

# concepts

---

### What is C ?

- C is an imperative (procedural) language
- All codes in C has to be inside the `main()` function
- C files ends with the `.c` extension eg `file_name.c`. This is the source code
- C source code have to be compiled in order to run using a compiler to create an executable file.

    <details>
    <summary> examples of some C compilers </summary>

  **_GCC (GNU Compiler Collection)_** - **Description:** GCC is a powerful, widely-used open-source compiler system supporting various programming languages, including C. - **Link:** [GCC Download](https://gcc.gnu.org/install/index.html)

  **_Clang_** - **Description:** Clang is a compiler front end for the C, C++, and Objective-C programming languages. - **Link:** [Clang Download](https://releases.llvm.org/download.html)

  **_Microsoft Visual C++ Compiler_** - **Description:** The Microsoft Visual C++ Compiler is part of the Visual Studio development environment. - **Link:** [Visual Studio Community Edition](https://visualstudio.microsoft.com/visual-cpp-build-tools/)

  **_TinyCC (TCC)_** - **Description:** TCC is a small and fast C compiler. - **Link:** [TinyCC Download](https://bellard.org/tcc/)

  **_Intel C++ Compiler_** - **Description:** Intel C++ Compiler is part of the Intel Parallel Studio, emphasizing performance on Intel architectures. - **Link:** [Intel Parallel Studio](https://software.intel.com/content/www/us/en/develop/tools/parallel-studio-xe.html)

  **_Pelles C_** - **Description:** Pelles C is a comprehensive development environment for C and C++. - **Link:** [Pelles C Download](https://www.pellesc.de/)

  **_Digital Mars C Compiler (DMD)_** - **Description:** DMD is a classic compiler for the C and C++ programming languages. - **Link:** [Digital Mars C and C++ Compiler](https://digitalmars.com/download/freecompiler.html)

  **_DJGPP (GNU Compiler for DOS)_** - **Description:** DJGPP is a 32-bit C and C++ compiler system for DOS. - **Link:** [DJGPP Download](http://www.delorie.com/djgpp/)

  **_OpenWatcom_** - **Description:** OpenWatcom is a free, open-source C, C++, and Fortran compiler. - **Link:** [OpenWatcom Download](http://www.openwatcom.org/)

    <details>

> ### comments

- Begins with /_ and ends with _/
- comments DO NOT nest.
- comments are used to document code.
  Example:

```c
    /* single line comment here */
    /*
     * multiline
     * comments
     * here
     */
```

```c
    /* does NOT /* work -error */
```

> ### variables

#### Data types (on most 64bits computers)

| Data Type            | Description                | Size (in bytes) | Range (Signed)                                          | Range (Unsigned)                |
| -------------------- | -------------------------- | --------------- | ------------------------------------------------------- | ------------------------------- |
| `char`               | Character or small integer | 1               | -128 to 127                                             | 0 to 255                        |
| `unsigned char`      | Unsigned character         | 1               | N/A                                                     | 0 to 255                        |
| `short`              | Short integer              | 2               | -32,768 to 32,767                                       | 0 to 65,535                     |
| `unsigned short`     | Unsigned short integer     | 2               | N/A                                                     | 0 to 65,535                     |
| `int`                | Integer                    | 4               | -2,147,483,648 to 2,147,483,647                         | 0 to 4,294,967,295              |
| `unsigned int`       | Unsigned integer           | 4               | N/A                                                     | 0 to 4,294,967,295              |
| `long`               | Long integer               | 8               | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | 0 to 18,446,744,073,709,551,615 |
| `unsigned long`      | Unsigned long integer      | 8               | N/A                                                     | 0 to 18,446,744,073,709,551,615 |
| `long long`          | Long long integer          | 8               | -(2^63) to (2^63)-1                                     | 0 to (2^64)-1                   |
| `unsigned long long` | Unsigned long long integer | 8               | N/A                                                     | 0 to (2^64)-1                   |

#### variables declaration

syntax:

```c
    data_type variable_name;
```

examples:

##### Integer Variables

```c
    int main() {
        // Signed integers
        int age = 25;
        long population = 1234567890;

        // Unsigned integers
        unsigned int students = 150;
        unsigned long long distance = 9876543210;

        return 0;
    }
```

##### floating points

```c
    int main() {
        // Single-precision float
        float temperature = 98.6;

        // Double-precision float
        double pi = 3.14159265359;

        return 0;
    }
```

##### character variables

```c
    int main() {
    // Signed char
    char grade = 'A';

    // Unsigned char
    unsigned char flag = 1;

    return 0;
}
```

##### multiple variables

```c
    int main() {
    // Multiple variable declarations
    int a, b, c;
    float x = 10.5, y = 20.3, z;

    return 0;
}
```

<details>
    <summary> Criteria for naming variable in c</summary>

    1. Descriptive and Meaningful:
        Variable names should clearly convey their purpose and meaning in the context of your code.
        Avoid single-letter variable names (except for loop counters in short loops).
    3. Camel Case:
        Use camel case for variable names (e.g., myVariable, totalAmount), especially in C where snake_case is less common than in some other languages.
    4. Avoid Reserved Keywords:
        Do not use reserved keywords in C as variable names.
    5. Follow Naming Conventions:
        Adhere to any naming conventions established by your team, project, or coding guidelines.
        Common conventions include using prefixes (e.g., str for strings, num for numbers) or suffixes (e.g., _ptr for pointers).
    6. Use Nouns for Objects:
        Variable names should typically be nouns representing objects or entities.
    7. Avoid Ambiguous Names:
        Choose names that are not ambiguous or easily confused with other variables.
        Be specific and avoid generic names like data or value.
    8 .Consistency:
        Be consistent with naming styles throughout your codebase.
        If you use camel case for one variable, stick to camel case for all variables.
    9. Avoid Acronyms and Abbreviations:
        Minimize the use of acronyms or abbreviations unless they are widely accepted and well-known.
    10. Short and Concise:
        Keep names reasonably short, but not at the expense of clarity.
        Avoid overly long variable names that can hinder readability.
    11. Understandable for Non-Programmers:
        Choose names that would make sense to someone who is not intimately familiar with the code.
        Prioritize human readability over brevity.

</details>

```c
    // Good variable names
    int totalAmount;
    char firstName[MAX_LENGTH];
    float averageScore;

    // Avoid using ambiguous names
    int data; // What kind of data?
    float x, y; // What do these represent?
```

> ### Arrays

- Array is a collection of element of the same data type stored in contiguos memory location
- The elements can be accessed using an index.

  syntax:

  ```c
    data_type array_name[array_size];
  ```

  `data_type`: Specifies the type of elements that the array will hold (e.g., int, float, char).
  `array_name`: The name given to the array.
  `array_size`: The number of elements the array can hold.

examples:

```c
    int numbers[5]; // declares an integer array with 5 elements
    char name[10]; // declares a character array to store a name with a maximum of 9 characters and a null terminator
    float prices[100]; // declares a floating-point array with space for 100 prices
    int matrix[3][3]; // declares a 3x3 integer multidimensional array
    int values[] = {1, 2, 3, 4, 5}; // declares and initializes an integer array with values
    int firstValue = values[0]; // access the first element of the array
```

**NB**: _array indices in C start from 0_

> ### structures

- A structure is a user-defined data type that allows you to group together variables of different data types under a single name.
- Each variable within the structure is called a member or field.
- Structures provide a way to organize and represent related data in a more meaningful and structured manner.
- The general syntax for defining a structure in C is as follows:

```c
    struct structure_name {
        data_type member1;
        data_type member2;
        // ... more members
    };
    struct structure_name variable_name;
```

    Example:

```c
    // Define a structure named 'Person'
    struct Person {
        char name[50];
        int age;
        float height;
    };
    // Declaring a variable type of type Persom
    struct Person person1;
```

<details>
    <summary>Usage example</summary>

```c
   #include <stdio.h>

    // Define a structure named 'Person'
    struct Person {
        char name[50];
        int age;
        float height;
    };

    int main() {
        // Declare a variable of type 'struct Person'
        struct Person person1;

        // Assign values to the members of the structure
        strcpy(person1.name, "John Doe");
        person1.age = 25;
        person1.height = 175.5;

        // Access and print the values
        printf("Person's Name: %s\n", person1.name);
        printf("Person's Age: %d\n", person1.age);
        printf("Person's Height: %.2f\n", person1.height);

        return 0;
    }

```

</details>

> **structures**
> Structures can be used to model complex entities, such as representing a point in a 3D space, storing information about students, employees, and more. Additionally, structures can be nested, and pointers can be used to dynamically allocate memory for structures.

> ### Arrays and Structures

```c
   1. struct new_struct var_array[32];

    2. struct student {
            char first_name[32];
            char last_name[32];
            struct address addr;
        }
```

> Functions && programs

- A program is a collection of Functions
- Functions
  - Sequence of programs instructions that performs a specific task
  - May take arguments as input information
  - Compute something
  - May return a result
  - Functions can call other Functions
- Parameters and return values must have a Type
- syntax:

```c
    return_type function_name(data_type param1, data_type param2, [...]){
        /* code block */
    }
```

- example:

```c
    int func(int a,char b){
        /* function body */
    }
```

> ## The main() function

- This is the entry point for every c program
- From the `main()` function you can call other Functions

```c
    #include <stdio.h>

    int main(int argc, char const *argv[])
    {
        /* code */
        return 0;
    }

/****************************************************************************/

    #include <stdio.h>

    int main(void)
    {
        /* code */
        return 0;
    }

[ ... ]

```

> #### Blocks

- This are code blocks ie section of code which are grouped together.
- They consist of one or more declarations and statements
- syntax:

```c
    {
        [declarations]
        /* declare variables*/

        [statements]
        /*
         * execute in order
         *
         * contains other code blocks
         * control structures (conditional statements,loops)
        */
    }
```

- example block code in function

```c
    int func(int a, int b)
    {
        /* variable declarations */
        int sum;
        int mul;
        int result;

        /* statements */
        sum = a + b;
        mul = a * b;
        result = sum + mul;
        return (result);
    }
```

> ### instructions , Expressions

- In C all Expressions are terminated by `;` (semicolon)
- Expressions always have a value
- Type of Expressions:

  - **Basic Expressions** - Arithmetic operations
  - **Affectations** - Assigning a value to a variable
  - **Comparisons** - checking a variable / testing
  - **Logical operators** - checking two things at the same time
  - **Binary operators**

1.  **Basic Expressions**

- Numbers, variables, Arithmetics, function calls

  - Numbers can be decimals, octal or hexadecimal
  - The value of a variable is the value it contains
  - The value of a functions is its return value

2.  **characters**

- single letter word
  - usually enclosed using single quotes

```c
'H' /* its value is 72 */
```

3.  **strings**

- Strings in C are sequences of characters represented as arrays of characters
  - Unlike some other programming languages, C does not have a built-in string data type.
  - Instead, strings are typically represented as arrays of characters, terminated by a null character ('\0'). - Here are some key points about strings in C:

```c
#include <stdio.h>
#include <string.h>

int main()
{
    /* declaration and initialization */
    char greeting1[] = "Hello, World!";
    char greeting2[20]; /* allocate space for 20 characters */
    strcpy(greeting2, "Hello again!");
}
```

### Arithmetic operators

```c
+ // addition
- // subtraction
* //multiplication
/ // division
% // modulo(integer remainder)
() // paranthesis - changes the precedence of operators

++, -- (increment, decrement)
```

**Affectations**

- change the content of a variable
- syntax:

```c
// var_name = expression
// example
a = 1;
a = 32 + 3;
b = func(1024, a + b);
```

**Affectations | element of arrays and structures**
syntax

> var_array[expression] = expression;
> var_struct.field_name = expression;
> example

```c
// array
a[0] = b - 32;
a[b + 1] = 1337;
// struct
s.age = 32 / 2 +f();
s.p[3] = 0;
aa[98].t[b  * 2] = f2(b + 1, 1337 / 2) + 402;
```

**comparisons**
|symbol | name |
|-------|-------------------------|
| < |less than |
| <= | less than or equal to |
| == | equal to |
| >= | greater than or equal to|
| > |greater than |
| != |not equal |

> **Logical operators**

> true is 1
> false is 0
> **_AND && =_** true if whole expression is true, false otherwise
> **_OR || =_** true if one of expression is true, false otherwise
> **_NOT ! =_** negate, true is false and vice versa

Logical operators are used to perform logical operations on boolean values (i.e., expressions that evaluate to either true or false). The logical operators in C include:

1. **Logical AND (`&&`):**

   - Returns true if both operands are true.
   - Returns false if at least one operand is false.

   ```c
   int a = 5;
   int b = 3;

   if (a > 0 && b > 0) {
       // This block will execute because both conditions are true.
   }
   ```

2. **Logical OR (`||`):**

   - Returns true if at least one operand is true.
   - Returns false if both operands are false.

   ```c
   int a = 5;
   int b = 3;

   if (a > 0 || b > 0) {
       // This block will execute because at least one condition is true.
   }
   ```

3. **Logical NOT (`!`):**

   - Returns true if the operand is false.
   - Returns false if the operand is true.

   ```c
   int a = 5;

   if (!(a > 0)) {
       // This block will not execute because the condition is false.
   }
   ```

Logical operators are often used in conditional statements (`if`, `else`, `while`, etc.) to control the flow of a program based on certain conditions. The result of a logical operation is always a boolean value: either true (1) or false (0).

Here's a more complex example that uses both logical AND and logical OR:

```c
int age = 25;
int height = 160;

if (age >= 18 && height >= 150) {
    // This block will execute because both conditions are true.
    printf("You are eligible for the ride.\n");
} else {
    // This block will execute if at least one condition is false.
    printf("You are not eligible for the ride.\n");
}
```

In this example, the person is eligible for a ride only if they are 18 years or older (`age >= 18`) and their height is 150 cm or taller (`height >= 150`). The logical AND (`&&`) ensures that both conditions must be true for the overall expression to be true. If either condition is false, the program goes to the `else` block.

**Example**

```c
a || b
a && 32 - f(b + c)
!(a == b)
```

> **Bitwise Operator**,
> **| OR**,
> **& AND**,
> **<< LEFT SHIFT**,
> **>> RIGHT SHIFT**,
> **^ XOR**,
> **~ NOT**,

Bitwise operators are used to perform operations on individual bits of integers. There are six bitwise operators in C: AND (`&`), OR (`|`), XOR (`^`), NOT (`~`), left shift (`<<`), and right shift (`>>`). Here's an explanation of each bitwise operator along with examples:

1. **AND (`&`):**

   - Performs a bitwise AND operation.
   - Sets a bit to 1 only if both corresponding bits are 1.

   ```c
   int a = 5;  // Binary: 0101
   int b = 3;  // Binary: 0011
   int result = a & b;  // Binary: 0001 (1 in decimal)
   ```

2. **OR (`|`):**

   - Performs a bitwise OR operation.
   - Sets a bit to 1 if at least one corresponding bit is 1.

   ```c
   int a = 5;  // Binary: 0101
   int b = 3;  // Binary: 0011
   int result = a | b;  // Binary: 0111 (7 in decimal)
   ```

3. **XOR (`^`):**

   - Performs a bitwise XOR (exclusive OR) operation.
   - Sets a bit to 1 if only one of the corresponding bits is 1.

   ```c
   int a = 5;  // Binary: 0101
   int b = 3;  // Binary: 0011
   int result = a ^ b;  // Binary: 0110 (6 in decimal)
   ```

4. **NOT (`~`):**

   - Performs a bitwise NOT operation.
   - Inverts each bit (changes 1 to 0 and vice versa).

   ```c
   int a = 5;  // Binary: 0101
   int result = ~a;  // Binary: 1010 (-6 in decimal, due to two's complement representation)
   ```

5. **Left Shift (`<<`):**

   - Shifts the bits of a number to the left by a specified number of positions.
   - Fills vacant positions with zeros.

   ```c
   int a = 5;  // Binary: 0101
   int result = a << 2;  // Binary: 010100 (20 in decimal)
   ```

6. **Right Shift (`>>`):**

   - Shifts the bits of a number to the right by a specified number of positions.
   - Fills vacant positions with the sign bit (for signed integers) or zeros (for unsigned integers).

   ```c
   int a = 16;  // Binary: 10000
   int result = a >> 2;  // Binary: 00100 (4 in decimal)
   ```

Keep in mind that the specific binary representation and behavior may vary based on the data type (e.g., `int`, `char`, `short`, etc.) and the system's architecture. Additionally, bitwise operations are often used in low-level programming, such as for optimizing certain algorithms or dealing with hardware interactions.

**Ternary Operator**
The ternary operator is a shorthand way of expressing an `if-else` statement in C. It is a concise way to write a simple conditional expression. The syntax of the ternary operator is:

```c
condition ? expression_if_true : expression_if_false;
```

The `condition` is evaluated first. If it is true, the entire expression evaluates to `expression_if_true`. Otherwise, it evaluates to `expression_if_false`.

Here's an example to illustrate the use of the ternary operator:

```c
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    // Using the ternary operator to find the maximum of x and y
    int max = (x > y) ? x : y;

    printf("The maximum value is: %d\n", max);

    return 0;
}
```

In this example, the condition `(x > y)` is evaluated. If `x` is greater than `y`, the value of `x` is assigned to `max`. Otherwise, the value of `y` is assigned to `max`. The result is then printed to the console.

This is equivalent to the following `if-else` statement:

```c
int max;

if (x > y) {
    max = x;
} else {
    max = y;
}
```

The ternary operator is particularly useful for short and simple conditional assignments, making the code more concise. However, it's important to use it judiciously, as overly complex expressions may reduce code readability.

**sizeof**
In C programming, the `sizeof` operator is used to determine the size (in bytes) of a variable or a data type. It returns the size as a `size_t` (an unsigned integer type).

The syntax of the `sizeof` operator is as follows:

```c
sizeof(type)
```

Here, `type` can be a data type, a variable, or an expression.

Here are a few examples:

1. **Size of a Data Type:**

   ```c
   #include <stdio.h>

   int main() {
       printf("Size of int: %zu bytes\n", sizeof(int));
       printf("Size of float: %zu bytes\n", sizeof(float));
       printf("Size of char: %zu bytes\n", sizeof(char));

       return 0;
   }
   ```

   This program prints the sizes of `int`, `float`, and `char` data types.

2. **Size of a Variable:**

   ```c
   #include <stdio.h>

   int main() {
       int num = 42;
       printf("Size of num: %zu bytes\n", sizeof(num));

       return 0;
   }
   ```

   This program prints the size of the variable `num`.

3. **Size of an Array:**

   ```c
   #include <stdio.h>

   int main() {
       int arr[5];
       printf("Size of arr: %zu bytes\n", sizeof(arr));

       return 0;
   }
   ```

   This program prints the size of an array `arr` of five integers.

4. **Size of a Structure:**

   ```c
   #include <stdio.h>

   struct Point {
       int x;
       int y;
   };

   int main() {
       struct Point p;
       printf("Size of struct Point: %zu bytes\n", sizeof(struct Point));

       return 0;
   }
   ```

   This program prints the size of the `struct Point`.

It's important to note that the size of a data type may vary depending on the system and compiler being used. The `sizeof` operator is a powerful tool for writing portable code, as it allows you to determine the size of data types at runtime.

> **&**

- The address of variable in a memory
  - example
    ```c
    p = &c; /* p now holds the address in memory of variable c */
    ```

---

## control structures

### if

```c
if (expression)
    [block] // executed if expression true
```

### if ... else

```c
if (expression)
    [block1] // execute if expression true
else
    [block2] // execute if false
```

### if

```c
while (expression)
    [block] // repeat the block untill expression becomes false
```

### if

```c
for (initialize; condition; update(increment, decrement))
    [block] // repeate the block a specified number of times,until condition becomes false
```

### return

```c
return (expression); // return value of a function
```

> ends the functions and returns to the calling function
> the return type should much the type of expression
> any code after the return type will never be executed
