// program for number triangle
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
        
          printf("%d ",j+1);
         //  printf("%c ",j+65); //for character triangle pattern 
        }
        printf("\n");
    }
    return 0;
}