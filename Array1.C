// This is the programm for 2D array in which elements are changed 

#include <stdio.h>

int main()
{
    int num[] = {10, 20, 30, 40};
    num[0] = 70;
    num[1] = 80;
    num[2] = 90;
    num[3] = 100;
    printf("Number at 0 will be : %d\n", num[0]); // It will replace the value 10 with 70.
    printf("Number at 1 will be : %d\n", num[1]); // It will replace the value 20 with 80.
    printf("Number at 2 will be : %d\n", num[2]); // It will replace the value 30 with 90.
    printf("Number at 3 will be : %d\n", num[3]); // It will replace the value 40 with 100.
   
    return 0; 
}