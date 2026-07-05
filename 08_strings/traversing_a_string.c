#include <stdio.h>

int main()
{
    char str[] = "Arnav";
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c ", str[i]);
    }
    return 0;
}
// -------------------------------------------------

// String and Character Arrays

#include <stdio.h>

int main()
{
    char word[] = "Cat";
    word[0] = 'B';
    printf("%s", word); // Output: Bat

    return 0;
}

//-----------------------------------------------

// Null Character Importance

#include <stdio.h>

int main()
{
    char name[5] = {'A', 'r', 'n', 'a', 'v'}; // No '\0'
    printf("%s", name);                       // Undefined behavior

    return 0;
}