#include<stdio.h>
int oddoccuring(int arr[],int m)
{
    int count =0;
    for(int i=0;i<m;i++)
    {
        count=count^arr[i];
    }
    return count;

}
int main()
{
int m;
    printf("enter the array size=");
    scanf("%d",&m);
 int arr[m];
   printf("enter array elements=");
    for(int k=0; k<m;k++)
    {
    scanf("%d",&arr[k]);
    }
int result=oddoccuring(arr,m);
printf("%d",result);
return 0;
}