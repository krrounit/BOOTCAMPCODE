#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows=");
    scanf("%d",&n);


for(int i=1; i<n; i++){
        for(int s=i; s<n; s++){
            printf(" ");
        }
        char a = 'A';
        for(int j=1; j<=i; j++){
            printf("%c",a);
            a++;
        }
        char b = 'A'+i-2;
        for(int k=2;k<=i;k++){
            printf("%c",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}