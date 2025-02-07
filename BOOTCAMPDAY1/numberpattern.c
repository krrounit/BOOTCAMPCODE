// program to print number pattern 
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int size=2*n-1;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++){
        int min=i<j?i:j;
        min=min<size-i-1?min:size-i-1;
        min=min<size-j-1?min:size-j-1;
        printf("%d ",n-min);

    }
    printf("\n");
}
return 0;
}
