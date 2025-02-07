#include<stdio.h>
int main()
{
    int n;
    printf("enter no of row=");
    scanf("%d",&n);
    
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                printf("*");
            }


        for(int j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }
    

        for(int j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }                      
    for(int i=1; i<=n; i++)   //loop for lower half
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        for(int j=(2*i-2); j<(2*n-2); j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
    }