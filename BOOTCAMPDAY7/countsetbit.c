#include<stdio.h>
int countsetbit(int n)
{
  int  count =0;
  while(n>0)
  {
    n=n&(n-1);
    count++;
  }
  return count;


}
int main()
{
    int n;
    scanf("%d",&n);
    countsetbit(n);
    int result = countsetbit(n);
    printf("%d",result);
    return 0;

}