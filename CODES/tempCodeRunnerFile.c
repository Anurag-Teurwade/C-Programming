#include<stdio.h>

unsigned long long fibo(int num);

int main()
{
    int num;
    unsigned long long fibonacci;

    printf("Enter the number to find nth fibonacci term:");
    scanf("%d",&num);

    fibonacci=fibo(num);

    printf("%d nth fibonacci term:%llu",num,fibonacci);

    return 0;
}


    unsigned long long fibo(int num
    {
        if(num==0)
        {
            return 0;
        }
        else if(num==1)
        {
            return 1;
        }
        else
        {
            return fibo(num-1)+fibo(num-2);
        }

    }
