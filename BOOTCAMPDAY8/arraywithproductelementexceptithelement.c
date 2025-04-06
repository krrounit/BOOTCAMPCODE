//program to create another array with the product of all elements except the ith element
#include <stdio.h>
void arrayproductelement(int arr[], int n, int result[]) {
    int zeroCount = 0;
    int product = 1;

    // Step 1: Count zeros and compute the product of non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        } else {
            product *= arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (zeroCount > 1) {
            result[i] = 0;  // More than one zero, all products will be zero
        } else if (zeroCount == 1) {
            result[i] = (arr[i] == 0) ? product : 0;  
        } else {
            result[i] = product / arr[i];  // No zeros, divide product
        }
    }
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result[n];
    arrayproductelement(arr, n, result);

    printf("The result array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}


//Leetcode 162 852 1901 2951 42 1219