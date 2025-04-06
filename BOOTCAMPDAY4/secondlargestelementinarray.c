#include <stdio.h>
#include <limits.h>  

int secondlargestelement(int arr[], int n) {
    int largest = INT_MIN, second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    return (second_largest != INT_MIN) ? second_largest : -1;
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int second_largest = secondlargestelement(arr, n);

    if (second_largest != -1) {
        printf("Second largest element = %d\n", second_largest);
    } else {
        printf("No second largest element found.\n");
    }

    return 0;
}
