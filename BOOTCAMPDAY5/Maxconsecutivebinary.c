#include<stdio.h>
int consecutivebinary(int arr[],int n)
{
    int maxcount =0 ,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            if(count>maxcount)
            {
            maxcount=count;
            }
        }
        else{
            count =0 ;
        }
    }
    return maxcount;

}

int main()
{
    int arr[]={0,1,1,0,1,1,1,0};
   int n = sizeof(arr)/sizeof(arr[0]);


   consecutivebinary(arr,n);
   int result =consecutivebinary(arr,n);
   printf("%d",result);
   return 0;

}