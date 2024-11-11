#include<stdio.h>
int main()
{
int i,n;
printf("print all even number till:");
scanf("%d",&n);
printf("All even number from %d to n:\n",n);
for(i=2;i<=n;i+=2)
{
    printf("%d\n",i);
}
return 0;
}