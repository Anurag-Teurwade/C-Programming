#include<stdio.h>
int main()
{
printf("Program of Natural numbers in range\n");    
int i,start,end;
printf("Enter start value:");
scanf("%d",&start);
printf("Enter end value:");
scanf("%d",&end);
printf("Natural number from %d to %d:\n",start,end);
for(i=start;i<=end;i++)
{
   printf("%d\n",i); 
}    
return 0;
}