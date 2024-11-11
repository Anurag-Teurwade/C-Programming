#include<stdio.h>
int main()
{
int i,n;
printf("print all odd numbers till:");
scanf("%d",&n);
printf("All odd numbers from 1 to %d:\n",n);
for(i=1;i<=n;i+=2)
{
    printf("%d\n",i);
}
return 0;
}