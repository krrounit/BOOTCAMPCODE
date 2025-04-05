// program to spiraltraversematrix

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter the array size (m rows, n columns): ");
    scanf("%d %d", &m, &n);

    int array[m][n]; 

    printf("Enter the array elements: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]); 
        }
    }
    printf("Entered elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    printf("Spiral traversal of the matrix is:\n");
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    
    while (top <= bottom && left <= right) {
    
        for (int i = left; i <= right; i++) {
            printf("%d ", array[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            printf("%d ", array[i][right]);
        }
        right--;
        

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", array[bottom][i]);
            }
            bottom--;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", array[i][left]);
            }
            left++;
        }
    }

    return 0;
}
// expected output
// Enter the array size (m rows, n columns): 3 3
// Enter the array elements: 
// 9 8 7
// 6 5 4
// 3 2 1
// Spiral traversal of the matrix is:
// 9 8 7 4 1 2 3 6 5
