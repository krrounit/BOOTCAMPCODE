#include<stdio.h>
int sumofdigits(int n)
{
    if(n==0)
    return 0;

    return n%10+sumofdigits(n/10);

}
int main()
{
    int n;
    printf("enter the no=");
    scanf("%d",&n);
    int result=sumofdigits(n);
    printf("%d",result);
    return 0;
}