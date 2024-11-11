#include<stdio.h>
int main()
{
int number=0;
printf("Enter a number:\n");
scanf("%d",&number);
if(number==10)
{
    printf("Number is equal to 10");
}    
else if(number==50)
{
    printf("Number is equal to 50");
}
else if(number==100)
{
    printf("Number is equal to 100");
}
else
{
    printf("Number is not equal to 10,50,100");
}
return 0;
}