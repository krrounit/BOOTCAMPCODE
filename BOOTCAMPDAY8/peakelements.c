// program to find peak elements
#include<stdio.h>

int findPeak(int arr[],int n){
    for(int i=0;i<n;i++)
    if((i==0||arr[i]>=arr[i-1])&&(i==n-1||arr[i]>=arr[i+1]))
    return arr[i];
    return -1;

}
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   
    printf("Peak element:%d\n",findPeak(arr,n));
    return 0;
}
// Expected output
// Enter array size: 5
// Enter array elements: 3 4 2 1 5
// Peak element:4
