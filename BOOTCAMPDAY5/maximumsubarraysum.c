#include<stdio.h>
int subarraysum(int arr[],int n)
{
    int maxsum =arr[0];
    for(int i=0;i<n;i++){
        int currentsum =0;
        for(int j=i;j<n;j++)
        {
            currentsum =currentsum + arr[j];
        }
        if(currentsum>maxsum){
            maxsum=currentsum;
        }
    }
    return maxsum;
}
int main()
{
    int m;
    printf("array size=");
    scanf("%d",&m);
int arr[m];

printf("enter array elements=");
for (int k=0 ;k<m;k++){
scanf("%d",&arr[k]);
}
int n=sizeof(arr)/sizeof(arr[0]);
printf("%d",subarraysum(arr,n));
return 0;
}

