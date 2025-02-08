//program to count number of bits to be flipped to convert A to B
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the number=");
    scanf("%d",&a);
    printf("enter the number="); //number to which it is requiredto be converted
    scanf("%d",&b);
    int c=a^b;
    int count=0;
    while(c){
        c=c&(c-1);
        count++;
    }
    printf("%d",count);
    return 0;
}