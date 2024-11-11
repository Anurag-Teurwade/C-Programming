#include<stdio.h>
int main()
{
int a,b,c,terms,i=1;

printf("Enter number of terms:");
scanf("%d",&terms);

printf("fibonacci terms are:\t");
/*fibonacci magic initialization*/
a=0;
b=1;
c=0;

do{
    printf("%d\t",c);
    a=b;
    b=c;
    c=a+b;
    i++;
}while(i<=terms);
return 0;
}