// program to check no is positive or negative or zero
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number=");
 scanf("%d",&n);
 if (n == 0)
    {
        printf("the number is zero: %d", n);
    }
    else if (n > 0)
    {
        printf("the number is positive: %d", n);
    }
    else
    {
        printf("the number is negative: %d", n);
    }
    return 0;
}