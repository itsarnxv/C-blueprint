/* Write a C program to input two strings and:

Find the length of each string.
Copy the first string into another string.
Concatenate the two strings.
Compare the two strings. */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";

    printf("Length of str1: %lu\n", strlen(str1));

    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    strcpy(str2, "C Language");
    printf("Copied String: %s\n", str2);

    printf("Comparison Result: %d\n", strcmp("abc", "abd"));
    printf("Comparison Result: %d\n", strcmp("str3", "str1"));

    printf("The reversed string is %s\n" , strrev(str1));
    return 0;
}

