#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[20];
    int marks;
};

int main()
{
    FILE *ptr;
    char ch;

    struct Student s = {"Arnav", 95};
    struct Student s1;

    // -------------------- Read Text File --------------------
    ptr = fopen("arnav.txt", "r");

    if(ptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Reading using fgetc():\n");

    while((ch = fgetc(ptr)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(ptr);

    // -------------------- Write Text File --------------------
    ptr = fopen("arnav.txt", "w");

    fprintf(ptr, "Hello Arnav\n");
    fprintf(ptr, "Learning File Handling\n");
    fprintf(ptr, "This is written using fprintf().\n");

    fclose(ptr);

    // -------------------- Append Text File --------------------
    ptr = fopen("arnav.txt", "a");

    fprintf(ptr, "This line is appended.\n");

    fclose(ptr);

    // -------------------- Read & Write (r+) --------------------
    ptr = fopen("arnav.txt", "r+");

    printf("\n\nReading using feof():\n");

    while(!feof(ptr))
    {
        ch = fgetc(ptr);

        if(ch != EOF)
        {
            printf("%c", ch);
        }
    }

    fprintf(ptr, "\nNew line added using r+ mode.");

    fclose(ptr);

    // -------------------- Binary File Write --------------------
    ptr = fopen("student.dat", "wb");

    fwrite(&s, sizeof(s), 1, ptr);

    fclose(ptr);

    // -------------------- Binary File Read --------------------
    ptr = fopen("student.dat", "rb");

    fread(&s1, sizeof(s1), 1, ptr);

    printf("\n\nBinary File Data\n");
    printf("Name  = %s\n", s1.name);
    printf("Marks = %d\n", s1.marks);

    fclose(ptr);

    return 0;
}