// program to find all elements that appear more than n/k times in an array
#include <stdio.h>

void morethanNbyKtimes(int arr[], int n, int k) {
    int value = n / k;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[i] == arr[j])
                count++;

        if (count > value) {
            int alreadyPrinted = 0;
            for (int j = 0; j < i; j++)
                if (arr[i] == arr[j])
                    alreadyPrinted = 1;
            if (!alreadyPrinted)
                printf("%d ", arr[i]);
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d array elements: ", n); // 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;  
    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k <= 0) {
        printf("Invalid value of k.\n");
        return 0;
    }

    morethanNbyKtimes(arr, n, k);

    return 0;
}
