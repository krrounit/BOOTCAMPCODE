
#include <stdio.h>

int main() {
    int n, arr[5];

    printf("Enter the number of elements (max 5): ");
    scanf("%d", &n);

    if (n > 5 || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int largest = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    return 0;
}








