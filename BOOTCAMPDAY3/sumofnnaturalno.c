#include<stdio.h>
int getsum(int n)
{
    if(n==0)
    return 0;
    return n+getsum(n-1);
}
int main()
{
    int n;
    printf("enter the no=");
    scanf("%d",&n);
   int  result=getsum(n);
printf("%d",result);
}