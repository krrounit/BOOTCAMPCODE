// program to find XOR of a number from L to R
#include <stdio.h>
int xorfromLtoR(int n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}
int main()
{
    int n ;
    printf("enter the number=");
    scanf("%d",&n);
    int result=xorfromLtoR(n);
    printf("%d\n",result);
    return 0;
}