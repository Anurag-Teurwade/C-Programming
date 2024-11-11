#include<stdio.h>
int main()
{
int num,reverse=0;
printf("Enter any number you want to reverse:");
scanf("%d",&num);

while(num>0)
{
    reverse=(reverse*10)+(num%10);
    num=num/10;
}    
printf("Reverse=%d",reverse);
return 0;
}