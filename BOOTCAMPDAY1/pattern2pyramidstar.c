//program for  star pyramid
#include<stdio.h>
 void pyramid(int n){
    
    for(int i=0;i<n;i++)
    {
       for(int j =0;j<n-i-1;j++)
       {
           printf(" ");
       }
        for(int j=0; j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    

}
int main()
{
    int n;
    printf("enter now of rows=");
    scanf("%d",&n);
    pyramid(n);
    return 0;
}