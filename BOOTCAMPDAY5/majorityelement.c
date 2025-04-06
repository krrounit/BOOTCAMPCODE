#include<stdio.h>
int majorityelement(int arr[],int n)
{
 int count =0;
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
    
        if(arr[i]==arr[j])
        {
            count++;
        }
    }
    if(count>n/2)
    {
        return arr[i];
    }
 }
 
 return -1;


}
int main()
{
    int m;
    printf("enter the array size=");
    scanf("%d",&m);
    int arr[m];
    for(int k=0; k<m;k++)
    {
    printf("enter array elements=");
    scanf("%d",&arr[k]);
    }
    
    int n=sizeof(arr)/sizeof(arr[0]);
 printf("%d",majorityelement(arr,n));
  return 0;
}