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

    **characters**

           - single letter word
           - usually enclosed using single quotes
           - The value of a character is its ASCII code
             - `man ascii`
           - example:

             ```c
             'H' /* its value is 72 */
             ```

    **strings**

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
