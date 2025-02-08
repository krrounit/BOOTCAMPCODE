//write a program to check if the kth bit is set
#include<stdio.h>
void checkkthbit(int n, int k)
{

    if(n&(1<<k-1))
    printf("set");
    else
    printf("not set");
    // if((n-1>>k)&1)
    // printf("not set");
    // else
    // printf("set");
}
int main()
{
    int n,k;
    printf("enter the number and the kth position to be checked=");
    scanf("%d\n%d",&n,&k);
    checkkthbit(n,k);
    return 0;
}