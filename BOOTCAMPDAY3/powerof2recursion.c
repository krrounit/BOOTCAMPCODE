#include<stdio.h>
int powerof(int n)
{
    if(n==0)
    return 1;
    //else
 return 2*powerof(n-1);
   // printf("%d",n);
}
int main()
{
    int n;
    printf("enter the no=");
    scanf("%d",&n);
  int result =powerof(n);
    printf("%d",result);
    return 0;

}