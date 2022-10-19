//Dev Agrawal (201ME169)
//Problem 2.24: Tracing System Calls using strace()
//Reference: https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/
/* Importing necessary libraries */
#include <stdio.h> // For Standard Input Output Functions
#include <stdlib.h> // For exit()
#include <unistd.h> //For getpid()

int main(void)
{
FILE *fptr1, *fptr2;
char filename[100], c;
int pid;
pid = getpid();
printf("Process PID is : %d\n",pid);

/* Prompt user to enter name of reading file */ 
printf("Enter the filename to open for reading \n");
scanf("%s", filename);

/* Open file to be read */ 
fptr1 = fopen(filename, "r");
if (fptr1 == NULL)
{
    printf("Cannot open file %s \n", filename); 
    exit(0);
}

/* Prompt user to enter name of writing file */ 
printf("Enter the filename to open for writing \n"); 
scanf("%s", filename);

/* Open file for writing */ 
fptr2 = fopen(filename, "w");
if (fptr2 == NULL)
{
    printf("Cannot open file %s \n", filename);
    exit(0);
}

/* Copy-Paste operations*/
c = fgetc(fptr1); // Read contents from file 1
while (c != EOF)
{
    fputc(c, fptr2); // Write contents in file 2
    c = fgetc(fptr1); // Read
}

printf("\nContents copied to %s", filename);
fclose(fptr1);
fclose(fptr2);
}
