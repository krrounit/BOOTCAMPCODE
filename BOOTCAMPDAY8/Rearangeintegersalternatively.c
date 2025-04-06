//program to rearrange positive and negative integers alternatively in an array
#include <stdio.h>
void rearrangearray(int arry[], int n, int result[]) {
    int negativeindex = 1, positiveindex = 0;

    for (int i = 0; i < n; i++) {
        if (arry[i] >= 0) {
            if (positiveindex < n) {  
                result[positiveindex] = arry[i];
                positiveindex += 2;
            }
        } else {
            if (negativeindex < n) {  
                result[negativeindex] = arry[i];
                negativeindex += 2;
            }
        }
    }
    
    // Fill remaining positions with zeros if uninitialized
    for (int i = 0; i < n; i++) {
        if (result[i] == 0 && arry[i] != 0) {
            result[i] = -1;  // Mark uninitialized positions
        }
    }
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (positive and negative): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result[n];
    for (int i = 0; i < n; i++) {
        result[i] = 0;  // Initialize to avoid garbage values
    }

    rearrangearray(arr, n, result);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
