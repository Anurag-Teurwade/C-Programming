#include<stdio.h>
int main()
{
int sum=0,N,i=1;
float avg;

printf("Enter the value of N:");
scanf("%d",&N);

do{
    sum+=i;
    i++;
}while(i<=N);

printf("The sum of %d numbers:%d",N,sum);

avg=(float)sum/N;

printf("\nAverage of %d number:%0.2f",N,avg);

return 0;
}