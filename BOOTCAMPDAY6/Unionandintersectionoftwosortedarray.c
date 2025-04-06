#include<stdio.h>
int findunion(int arr1[],int n1,int arr2[],int n2)
{
    int i=0,j=0;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            printf(" %d",arr1[i++]);
        }
        else if(arr2[j]<arr1[i])
        {
            printf(" %d",arr2[j++]);
        }
        else{
        printf(" %d",arr1[i++]);
            j++;
        }
    }
    while(i<n1){
    printf(" %d",arr1[i++]);
    }
    while(j<n2)
    {
        printf(" %d",arr2[j++]);
    }
    printf("\n");
}
int main()
{
    int arr1[]={1,2,5,4,6,8};
    int arr2[]={1,3,6,9};
    int n1= sizeof(arr1)/sizeof(arr1[0]);
    int n2= sizeof(arr2)/sizeof(arr2[0]);
    findunion(arr1,n1,arr2,n2);
    return 0;
}