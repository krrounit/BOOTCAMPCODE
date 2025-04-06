// 
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the minimum difference in subarrays of size m
int findMinDiff(int arr[], int n, int m) {
    if (m > n || m <= 0) {
        printf("Invalid subarray size.\n");
        return -1;  // Error case
    }

    // Sort the array
    qsort(arr, n, sizeof(arr[0]), compare);

    int minDiff = INT_MAX;

    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < minDiff)
            minDiff = diff;
    }

    return minDiff;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (only 0, 1, or 2): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0 || arr[i] > 2) {  // Input validation
            printf("Invalid input! Only 0, 1, or 2 are allowed.\n");
            return 1;
        }
    }

    int m = 3; // Size of subarray
    int result = findMinDiff(arr, n, m);
    if (result != -1) {
        printf("Minimum difference is: %d\n", result);
    }

    return 0;
}

