#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare and initialize a 2D static array with predefined values
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};

    // Declare an array of pointers for dynamically allocated rows
    int *B[3];

    // Declare a double pointer for a fully dynamically allocated 2D array
    int **C;

    int i, j;

    // Iterate through the dynamically allocated 2D array A
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            // Print the values of C (uninitialized memory may contain garbage values)
            printf("%d ", A[i][j]);
        }
        printf("\n"); // Move to the next row after printing each row
    }

    // Dynamically allocate memory for each row of B
    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));

    // Iterate through the dynamically allocated 2D array B
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            // Print the values of C (uninitialized memory may contain garbage values)
            printf("%d ", B[i][j]);
        }
        printf("\n"); // Move to the next row after printing each row
    }

    // Dynamically allocate memory for C (rows of pointers)
    C = (int **)malloc(3 * sizeof(int *));

    // Dynamically allocate memory for each row in C
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));

    // Iterate through the dynamically allocated 2D array C
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            // Print the values of C (uninitialized memory may contain garbage values)
            printf("%d ", C[i][j]);
        }
        printf("\n"); // Move to the next row after printing each row
    }

    return 0;
}
