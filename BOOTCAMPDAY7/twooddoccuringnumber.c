#include<stdio.h>
void twooddoccuring(int arr[],int m)
{
 int y =arr[0];
 for(int i=1;i<m;i++)
 y=y^arr[i];
 int z =(y&(~(y-1)));
 int res1 =0,res2=0;
 for(int i=0;i<m;i++)
 {
    if((arr[i]&z)!=0)
    res1 =res1^arr[i];
    else
    res2=res2^arr[i];
 }
 printf("two odd occuring no = %d %d",res1,res2);
}
int main()
{
    int m;
    printf("enter array size=");
    scanf("%d",&m);
    int arr[m];
    printf("enter array elements=");
    for(int i =0;i<m;i++)
    {
        scanf(" %d",&arr[i]);
    }
    twooddoccuring(arr,m);
    //printf("%d %d",result);
    return 0;
}