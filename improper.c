#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes

 
int main(int argc, char** argv) {
 
void encodeShellString(char str1[], int num, char str2[]) {
 
// This is a shell for a function that would validate the input 
 
// escape any special characters
 
// and enclose in quotes
}

 
// Ensure that the user supplied exactly one command line argument
 
if (argc != 2) { 
 
fprintf(stderr, "Please provide the address of a file as an input.\n");
 
return -1;
 
}
 
char *fileName = argv[1];
 
char userFileQuoted[BUFSIZE] = {0};

encodeShellString(userFileQuoted, BUFSIZE, fileName); 

char command[BUFSIZE] = {0};

snprintf(command, BUFSIZE, "wc -c < %s", userFileQuoted);

system(command);

return 0;
}
