//program to solve the trapping rain water problem
#include <stdio.h>
int maxWaterstored(int arr[], int n) {
    int res = 0;

    // For every element of the array
    for (int i = 1; i < n - 1; i++) {

        // Find the maximum element on its left
        int left = arr[i];
        for (int j = 0; j < i; j++)
            if (arr[j] > left)
                left = arr[j];

       
        int right = arr[i];
        for (int j = i + 1; j < n; j++)
            if (arr[j] > right)
                right = arr[j];

       
        res += (left < right ? left : right) - arr[i];
    }

    return res;
}


int main() {
   // int arr[] = { 2, 1, 5, 3, 1, 0, 4 };
   // int n = sizeof(arr) / sizeof(arr[0]);
   int n;
   printf("Enter array size: ");
   scanf("%d", &n);
   
   int arr[n];
   printf("Enter array elements: ");
   for (int i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
    printf("%d", maxWaterstored(arr, n));
    return 0;
}