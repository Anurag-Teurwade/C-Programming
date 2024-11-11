#include<stdio.h>
int main()
{
int num;
long long product=1ll;
printf("Enter any to find product of digits:");
scanf("%d",&num);

while(num!=0)
{
    product=product*(num%10);
    num=num/10;
}
printf("Product of digits=%lld",product);
return 0;
}
