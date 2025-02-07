//program to print floyd's triangle
#include<stdio.h>
int main()
{
    int n;
    int temp = 1;
    printf("enter the no=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",temp);
            temp++;
        }
        printf("\n");
    }
    
    return 0;
}
// expected output
//
//
//
//
//