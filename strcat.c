// This is the programm of strcat() string fuction which concatenate the strings

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello ";
    char str2[] = "World!";

    strcat(str1, str2); // Concatenate the srt2 to str1
    printf("Concatenate string is : %s\n", str1); // It will print str1 first and str2 second 'Hello World!'
    return 0;
}