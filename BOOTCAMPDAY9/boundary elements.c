// write a program to find boundary elements

#include <stdio.h>
void printBoundary(int m, int n, int arr[m][n]) {
    
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[0][j]);
    }
    
    for (int i = 1; i < m; i++) {
        printf("%d ", arr[i][n - 1]);
    }
   
    if (m> 1) {
        for (int j = n - 2; j >= 0; j--) {
            printf("%d ", arr[m - 1][j]);
        }
    }

    if (n > 1) {
        for (int i = m- 2; i > 0; i--) {
            printf("%d ", arr[i][0]);
        }
    }
}

int main() {
    int m, n;
    

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m,&n);
   

    int arr[m][n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    printf("Boundary elements are: ");
    printBoundary(m, n, arr);
    printf("\n");

    return 0;
}
// expected output
//   Enter number of rows and columns: 3 3
// Enter the elements of the array:
// 2 4 5
// 7 8 9
// 4 6 3
//Boundary elements are: 2 4 5 9 3 6 4 7 
