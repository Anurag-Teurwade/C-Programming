#include<stdio.h>
#include<math.h>
int main ()
{
int orignalNum,num,lastDigit,digits,sum;

printf("Enter the number to check Armstrong Number:");
scanf("%d",&num);

sum=0;

/*copy the value of num for processing*/
orignalNum=num;

/*find Total digits in number*/
digits=(int) log10(num)+1;

while(num>0)
{
    /* Extract the  last digit */
    lastDigit=num%10;

    /*compute sum of power of lastDigits*/
    sum=sum+round(pow(lastDigit,digits));

    /*Remove last digits*/
    num=num/10;
}

/* check for Armstrong number*/
if(orignalNum==sum)
{
    printf("%d is ARMSTRONG NUMBER",orignalNum);
}
else
{
   printf("%d is  not ARMSTRONG NUMBER",orignalNum); 
}
return 0;
}