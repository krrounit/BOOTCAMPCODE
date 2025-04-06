#include<stdio.h>
int arraysorted(int arr, int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return arr[n-1]>= arr[n-2]
    && arraysorted(a,n-1);
}
int main()
{
    //int arr[5],j;
    //printf("enter elements in array=");
   // scanf("%d",&arr[5]);
    
    int arr[]={20,21,24,26,32,34};
    int n= sizeof(arr) /sizeof(arr[0]);
    if(arraysorted(a, n))
    {
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;

}