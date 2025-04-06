#include<stdio.h>
int main()
{
int n,arr[5];
printf("enter the no of elements");
scanf("%d",&n);
for(int i =0 ; i<n; i++)
{
    printf("enter the no %d =",i+1);
    scanf("%d",&arr[i]);
}
for(int i=1; i<n; ++i)
{
    if (arr[0]<arr[1]){
        arr[0] = arr[i];

    }
}
printf("largest element =%d",arr[]);
return 0;
}



