//program to find a triplet in a sorted array
#include<stdio.h>
void findtriplet(int arr[],int n,int x){
    for(int i=0;i<n-2;i++){
        int l=i+1,r=n-1;
        while(l<r){
            int sum=arr[i]+arr[l]+arr[r];
            if(sum==x){
                printf("Triplet:(%d,%d,%d)\n",arr[i],arr[l],arr[r]);
                return ;
            
            }
            (sum<x)?l++:r--;
        }
    }
    printf("no triplet found\n");
}
int main(){
 
 int n;
 printf("enter array size=");
 scanf("%d",&n);
   int arr[n];
   printf("enter array elements positive and negative=");
   for(int i =0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   int x;
  printf("enter the target sum=");
  scanf("%d",&x);
  findtriplet(arr,n,x);
    return 0;
}
// Expected output
// enter array size=5
// enter array elements positive and negative=4 5 3 2 1
// enter the target sum=6
// Triplet:(3,2,1)