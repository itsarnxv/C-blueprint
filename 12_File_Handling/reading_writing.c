/*
There are four basic operations that can be performed on files:

Creating a file
Opening a file
Reading from and writing to a file
Closing a file
*/



/* File Pointers
C uses a special pointer of type FILE* to handle files. It is declared as:
 //  FILE *ptr; --> Synatx
 */

// Opening and Closing a File



/* 
FILE *ptr;
ptr = fopen("example.txt", "w");  // Open file in write mode
if (ptr == NULL) {
    printf("File not found!");
    return 1;
}
fclose(ptr); 
*/
