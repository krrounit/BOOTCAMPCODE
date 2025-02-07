#include<stdio.h>
int Fibonaci(int n)
{
    if(n<=1)
   return n;
    return Fibonaci(n-1)+Fibonaci(n-2);
}
int main()
{
    int n;
    printf("enter the no=");
    scanf("%d",&n);
    //for(int i= 0;i<=n;i++){}

    int fib = Fibonaci(n);
    
printf("%d",fib);
return 0;
} 