// Call a Value
#include <stdio.h>

void change(int x) {
    x = 10;
}

int main() {
    int a = 5;
    change(a);
    printf("%d", a); // Output: 5
    return 0;
}

// Call by Reference

#include <stdio.h>

void change(int *x) {
    *x = 10;
}

int main() 
{
    int a = 5;
    change(&a);
    printf("%d", a); // Output: 10
    return 0;
}