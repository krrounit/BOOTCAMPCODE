#include<stdio.h>
int main()
{
    int r,n,rev=0,m;
    scanf("%d",&n);
    m=n;
    while(n>0){
  r=n%10;
  rev=(r*r*r)+rev;
  n=n/10;

    }
if(m==rev)
{
    printf("no is armstrong\n");
}    
else
{
    printf("no is not armstrong");
}
return 0;

}