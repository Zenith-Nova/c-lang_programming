#include <stdio.h>
#include <string.h>

int main()
{
    // Declaration and initialization
    char greeting1[] = "Hello, world!";
    char greeting2[20]; // Allocate space for 20 characters
    strcpy(greeting2, "Hello again!");

    // Printing strings
    printf("String 1: %s\n", greeting1);
    printf("String 2: %s\n", greeting2);

    return 0;
}