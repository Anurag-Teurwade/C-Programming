#include<stdio.h>
#define SIZE 8
int main()
{
char binary[SIZE+1],onesComp[SIZE+1];
int i=0,error=0;

printf("Enter %d bit binary value:",SIZE);

/*take input from user*/
gets(binary);

do{
    if(binary[i]=='1')
    {
        onesComp[i]='0';
    }
    else if(binary[i]=='0')
    {
        onesComp[i]='1';
    }
    else 
    {
       
        printf(" Invalid Input ");
        error=1;
        break;
    }
    i++;
}while(i<SIZE);

/*Marks the end of onesComp String*/
onesComp[i]='\0';

if(error==0)
{
    
    printf("Original binary=%s\n",binary);
    printf("OnesComplement=%s\n",onesComp );
}
return 0;
}
