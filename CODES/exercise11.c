#include<stdio.h>
int main()
{
    int n,num,rev=0;
    printf("Enter any number to check palindrome:");
    scanf("%d",&n);

    num=n;

    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    if(rev==num)
    {
        printf("The number %d is palindrome",num);
    }
    else
    {
        printf("The number %d is not a palindrome",num);
    }

    return 0;
}