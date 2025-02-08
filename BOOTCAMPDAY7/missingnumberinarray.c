#include<stdio.h>
int Missingnumberinarray(int arr[], int n)
{
    int sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        actual_sum += arr[i];
    }
    return sum - actual_sum;
}

int main()
{
    int n;
    printf("enter array size=");
    scanf("%d",&n);
    int arr[n]; 
    printf("enter array elements=");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int missingNumber = Missingnumberinarray(arr, n);
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}