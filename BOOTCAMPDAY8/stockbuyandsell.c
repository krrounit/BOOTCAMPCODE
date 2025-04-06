// program to find the best time to buy and sell stock
#include<stdio.h>
int maxProfit(int price[],int n){
    int minPrice=price[0],maxProfit=0;
    for(int i=1;i<n;i++){
        if(price[i]<minPrice)
        minPrice=price[i];
   else if (price[i]-minPrice>maxProfit)
   maxProfit=price[i]-minPrice;
   
    }
    return maxProfit;
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
    printf("Max profit:%d\n",maxProfit(arr,n));
    return 0;

}