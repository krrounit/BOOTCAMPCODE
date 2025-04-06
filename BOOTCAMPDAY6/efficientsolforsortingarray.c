// program to sort an array which consists of only 0, 1, and 2 without using sorting                                                  (Dutch National Flag Problem)
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(&arr[low++], &arr[mid++]);
        } else if (arr[mid] == 1) {
            mid++;
        } else if (arr[mid] == 2) {
            swap(&arr[mid], &arr[high--]);
        } else {
            printf("Invalid element detected! Only 0, 1, or 2 are allowed.\n");
            return;
        }
    }
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter array elements (only 0, 1, or 2): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0 || arr[i] > 2) {
            printf("Invalid input! Array can only contain 0, 1, or 2.\n");
            return 1;
        }
    }

    sortArray(arr, n);

    printf("Sorted array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}
