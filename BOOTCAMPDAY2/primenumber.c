// program to check prime number
#include <stdio.h>
#include <math.h>

int main() {
    int n, r = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    

    if (n <= 1) {
        printf("Not a prime number");
        return 0;
    }

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            r++;
            if (r > 2) {
                break; 
            }
        }
    }

    if (r == 2) {
        printf("Number is not prime prime");
    } else {
        printf(" prime number");
    }

    return 0;
}
