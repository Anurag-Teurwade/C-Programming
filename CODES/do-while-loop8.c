#include<stdio.h>
int main()
{
double number,sum=0;

do{
    printf("Enter a number:");
    scanf("%lf",&number);
    sum+=number;
}while(number!=0.0);

printf("sum:%.2f",sum);

return 0;

}