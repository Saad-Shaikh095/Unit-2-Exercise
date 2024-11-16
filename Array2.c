// This programm shows the marks of the students using Array 

#include <stdio.h>

int main() 
{
    
    int marks[5]; 
    int i;

    printf("Enter marks for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nMarks entered:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
