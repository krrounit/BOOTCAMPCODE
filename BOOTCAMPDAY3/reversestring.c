//reverse a string using recursion
#include<stdio.h>
#include<string.h>
void reverse(char *str){
if(*str){
    reverse(str+1);
    printf("%c",*str);
}
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    reverse(str);
    return 0;
}