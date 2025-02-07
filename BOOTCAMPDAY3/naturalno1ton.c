#include<stdio.h>
void getno(int n)
{
    if(n==0)
    return;
    else
 getno(n-1);
   printf("%d ",n);
   
}
int main()
{
    int n;
    printf("enter the no=");
    scanf("%d",&n);
    getno(n);
   return 0;
    

}