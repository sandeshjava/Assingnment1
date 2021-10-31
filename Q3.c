#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the order of 2D matrix (row*column)\n");
    scanf("%d %d", &row, &column);
    int _2D_array[row][column];
    printf("Enter the 2D array\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            scanf("%d", &_2D_array[i][j]);
    }
    int n = row * column;
    int _1D_array[n];
    int k = 0;
    printf("Inital 2D Array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d ", _2D_array[i][j]);
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            _1D_array[k] = _2D_array[i][j];
            k++;
        }
    }
    printf("\n Final 1D array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", _1D_array[i]);
    return 0;
} 