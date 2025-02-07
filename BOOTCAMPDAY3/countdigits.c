#include<stdio.h>
int count(int n)
{
    if(n==0)
    
        return 0;
    
    else
    
        return 1+count(n/10);
    
}
int main()
{
    int n,f;
    printf("Enter a no whose digit to be count: ");
    scanf("%d",&n);
    f=count(n);
    printf("%d",f);
   return 0;
}