// Type3- program for inverted number pyramid
#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows=");
    scanf("%d",&n);

   for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// expected output
//   * * * * * * * 
//     * * * * * 
//      * * * 
//         * 
