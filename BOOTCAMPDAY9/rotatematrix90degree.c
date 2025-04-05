// program to rotate matrix 90 degree

#include <stdio.h>
#define MAX 100

void transpose(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void reverseRows(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[MAX][MAX];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    transpose(matrix, n);
    reverseRows(matrix, n);

    printf("Matrix after 90 degree rotation:\n");
    printMatrix(matrix, n);

    return 0;
}
// expected output
//Enter the size of the matrix (n x n): 3 3
//Enter the elements of the matrix:
// 1 2 3
// 4 5 6
// 7 8 9
//Matrix after 90 degree rotation:
// 6 3 3 
// 7 4 1 
// 8 5 2 
