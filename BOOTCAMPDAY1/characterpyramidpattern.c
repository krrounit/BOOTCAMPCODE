//program for printing character pyramid
#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows =");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<=i;j++)
        {
            printf(" %c",j+65);
        }
        printf("\n");
    }
    return 0;

}

//expected output
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA