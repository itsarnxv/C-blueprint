/* Writing to a File
You can write data using fprintf() or fputc() */

// FILE *ptr = fopen("data.txt", "w");
// fprintf(ptr, "Hello, C Programming!");
// fclose(ptr);

//--------------------------------------------------------------------------


/* Checking End of File
Use the feof() function to detect the end of a file while reading. */

// while (!feof(ptr)) {
//     ch = fgetc(ptr);
//     printf("%c", ch);
// }


//----------------------------------------------------------------------------


/* Binary File Operations
C also supports reading and writing binary files using fread() and fwrite(). */

// struct Student {
//     char name[50];
//     int marks;
// };

// struct Student s = {"Harry", 90};
// FILE *ptr = fopen("student.dat", "wb");
// fwrite(&s, sizeof(s), 1, ptr);
// fclose(ptr);

//-------------------------------------------------------------------------------

/* Error Handling in File Operations
Always check if the file pointer is NULL before performing file operations to avoid crashes. */

// if (ptr == NULL) {
//     printf("Error opening file!");
//     exit(1);
// }

//---------------------------------------------------------------------------------

/* Closing a File
After performing all file operations, always close the file using: */
// Syntax ---> fclose(ptr);
