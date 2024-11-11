#include<stdio.h>
int main()
{
int i=1,num,sum=0;

printf("Enter any number to check Perfect number:");
scanf("%d",&num);

while(i<=num/2)
{
    if(num%i==0)
    {
        sum+=i;
    }
    i++;
}
/*Check for perfect number*/
if(num==sum && num>0)
{
    printf("%d is Perfect number",num);
}
else
{
    printf("%d is  not Perfect number",num);
}
return 0;
}