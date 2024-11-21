// This is the code of String Functions in which strlen, strcpy, strcat, strcmp

#include <stdio.h>
#include<string.h>
int main() 
{
    char str1[] = "Unstoppable";
    char str2[20] = "Siddesh";

    printf("Length of str1: %d\n", strlen(str1)); // strlen - It gives us the length of the string.

    strcpy(str2, str1);
    printf("After copying str2: %s\n", str2); // strcpy - It copies the value of str1 in str2.

    strcat(str2, " Welcome"); // strcat - It concatinates the value of str1 with str2.
    printf("After concatinating str2:%s\n", str2); // It will print str1 first and then str2.

    int result = strcmp(str1, str2); // strcmp - It compares the values of strings.
    if (result == 0) // Here a loop is used which prints the comparison between to strings.
    {
        printf("str1 is equal to str2\n"); 
    }

    else if (result < 0)
    {
        printf("str1 is less than str2\n");
    }

    else 
    {
        printf("str1 is greater than str2\n");
    }

    return 0;

}