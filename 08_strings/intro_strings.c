#include<stdio.h>

int main()
{

    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str1[20] = "Hello"; // Shortcut for above 

    return 0;
}

// --------------------------------------------------------

#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", &name); // Note: scanf stops reading at the first space
    printf("Hello, %s!", name);
    return 0;
}

// Syntax = fgets(name, sizeof(name), stdin); 
// For multi-word input, use gets() (deprecated) or fgets() instead of scanf().