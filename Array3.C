// This programm is for 2x2 matrix 

#include <stdio.h>

int main() 
{
    // Declare a 2x2 matrix
    int matrix[2][2];

    // Input elements for the 2x2 matrix
    printf("Enter elements for a 2x2 matrix:\n");

    printf("Element [0][0]: ");
    scanf("%d", &matrix[0][0]); // It will ask the user to give the value for a11

    printf("Element [0][1]: ");
    scanf("%d", &matrix[0][1]); // It will ask the user to give the value for a12

    printf("Element [1][0]: ");
    scanf("%d", &matrix[1][0]); // It will ask the user to give the value for a21

    printf("Element [1][1]: ");
    scanf("%d", &matrix[1][1]); // It will ask the user to give the value for a22

    // Display the matrix
    printf("\nThe 2x2 matrix is:\n");
    printf("%d %d\n", matrix[0][0], matrix[0][1]);
    printf("%d %d\n", matrix[1][0], matrix[1][1]);

    return 0;
}