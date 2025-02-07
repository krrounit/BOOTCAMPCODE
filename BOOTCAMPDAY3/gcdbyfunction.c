// #include<stdio.h>
// binarysearch(arr,x,low,high)
// {
//     if low > high
//     return false;
//     else 
//     mid = (low +high)/2;
//     if x == arr[mid]
//     return mid
// else if x >arr[mid]
//   return binarysearch(arr, x, mid+1,high)


// }
// int main()
// {
//     int arr[] ={12,13,45,21,22,};

// }
//program to find the greatest common divisor(gcd)
#include <stdio.h>

// Function to find the GCD of two numbers using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
