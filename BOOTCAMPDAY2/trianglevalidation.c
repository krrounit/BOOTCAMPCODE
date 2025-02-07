#include<stdio.h>
int main()
{
    int x,y,z,s;
    scanf("%d %d %d",&x,&y,&z);
    s=x+y+z;
    if(s==180)
    {
    if(x+y>z && x+z>y && y+z>x)
    {

        printf("s is valid triangle");
        
    }
    }
    else{
        printf("s is not a valid triangle ");
    }
    
}