#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int x=10,y=20;
    int s=add(x,y);
    printf("The addition of x and y is %d",s);
}
