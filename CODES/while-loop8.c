#include<stdio.h>
int main()
{
int i=2,num,isPrime;

isPrime=1;

printf("Enter any number to check prime:");
scanf("%d",&num);

while(i<=num/2)
{
if(num%i==0)    
{
    isPrime=0;
    break;
}
i++;
}

if(isPrime==1 && num>1)
{
 printf("%d is a prime",num);   
}
else
{
    printf("%d is not a prime",num);
}
return 0;
}
