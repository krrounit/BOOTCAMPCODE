//Program to do transpose of matrix
#include<stdio.h>
int main ()
{
    int m, n;
    printf("Enter the array size (m rows, n columns): ");
    scanf("%d %d", &m, &n);

    int array[m][n], transpose[n][m]; 

    printf("Enter the array elements: \n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]); 
        }
    }

    printf("The transpose of the matrix is:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j] = array[j][i]; 
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", transpose[i][j]); 
        }
        printf("\n");
    }
    return 0;
}
// expected output
//Enter the array size (m rows, n columns): 3 3
//Enter the array elements: 
// 2 4 5
// 1 2 3
// 6 7 8
// The transpose of the matrix is:
// 2       1       6
// 4       2       7
// 5       3       8
