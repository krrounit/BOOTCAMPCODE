#include<stdio.h>
int getno(int n)
{
    if(n==0)
   return n; 
   printf("%d ",n);
   return getno(n-1);
}
int main()
{
    int n;
    printf("enter the no=");
    scanf("%d",&n);
    int result = getno(n);
   // printf("%d ",result);
   return 0;
    

}