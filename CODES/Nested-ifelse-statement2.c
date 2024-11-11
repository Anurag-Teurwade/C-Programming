#include<stdio.h>
int main()
{
int a;
int education;
printf("Enter your current age here:");
scanf("%d",&a);
printf("Enter you education:");
scanf("%d",&education);
if(a>18 && a<=50)
{
if(education>=10)
{
    printf("You are eligible for working");
}
else
{
    printf("Your education is not satisfied");
}    
}
else
{
    printf("Age is not satisficatory acc.to organisation");
}  
return 0;
}