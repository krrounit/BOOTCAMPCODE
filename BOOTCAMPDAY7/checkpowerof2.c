#include<stdio.h>
void checkpowerof2(int n)
{
    if((n>0)&&(n&(n-1))==0)
    printf("yes power of 2");
    else
    printf("not power of 2");
}
int main()
{
 int n;
 scanf("%d",&n);
 checkpowerof2(n);
 return 0;

}
