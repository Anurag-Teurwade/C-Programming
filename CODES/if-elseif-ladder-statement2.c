#include<stdio.h>
int main()
{
int marks;
printf("Enter your marks:");
scanf("%d",&marks);
if(marks>=80 && marks<=100)
{
    printf("Congrats! You have scored grade A");
}
else if(marks>=60 && marks<80)
{
    printf("You have scored grade B");
}
else if (marks>=40 && marks<60)
{
    printf("You have scored grade C");
}
else
{
    printf("Sorry,You have been failed");
}
return 0;
}