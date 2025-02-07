#include<stdio.h>
int main()
{
    int n,r,m,rev=0;

    scanf("%d",&n);
    m=n;

    while(n!=0)
    {
        r =n%10;
        rev=rev*10+r;
        n=n/10;


    }
    if(m==rev)
    {
        printf("no is palindrome");

    }
    else{
        printf("no is not palindrome");
    }

}