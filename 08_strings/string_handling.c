#include<stdio.h>
#include<string.h>

int main()
{
    char name[] = "Arnav";
    int length = strlen(name);
    printf("The length of this string is %d\n" , length);
    return 0;


}

// -----------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50] = "Hello";

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

/* Function	        Description
strlen(str)	        Returns the length of the string
strcpy(dest, src)	Copies one string into another
strcat(dest, src)	Concatenates two strings
strcmp(str1, str2)	Compares two strings
strrev(str)	        Reverses a string (not standard C, available in some compilers) */