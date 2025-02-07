//program for character,number and star pyramid
#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows =");
     scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n-i-1;j++)
        {
         printf(" ");
        }
       
    
    for(int j=0;j<i+1;j++)
    {   
       // printf("*");                      // for star pyramid
        printf("%d",j+1);                   //for number pyramid
        
    }
    for(int j =i-1;j>=0;j--)
    {   
       // printf("*");                  // for star pyramid
      printf("%d",j+1);                //for number pyramid
        
    }
    printf("\n");
    }
return 0;
}


