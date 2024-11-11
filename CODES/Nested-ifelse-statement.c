#include<stdio.h>
int main()
{
int marks,attendance;
printf("Enter you marks and attendance:\n");
scanf("%d%d",&marks,&attendance);
if(marks>=40)
{
if(attendance>=75)
{
    printf("Your are pass");
}
else
{
    printf("Your attandance is very low");    
}
}
else
{
    printf("You are fail");
}
return 0;
}