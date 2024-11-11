#include<stdio.h>
int main()
{
char ch;
printf("Alphabets from a-z are:\n");
scanf("%c",&ch);
for(ch='a';ch<='z';ch++)
{
    printf("%c\n",ch);
}
return 0;
}