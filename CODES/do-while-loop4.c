#include<stdio.h>
#define SIZE 8
int main()
{
char binary[SIZE+1],onesComp[SIZE+1],twosComp[SIZE+1];
int i,carry=1;
int n=0;

/*aise he do while loop leya he*/
do{
    
    printf("The program of twos complement\n",n);
    n++;
}while(n!=1);

printf("Enter %d bit binary value:",SIZE);
gets(binary);

for(i=0;i<SIZE;i++)
{
    if(binary[i]=='1')
    {
        onesComp[i]='0';
    }
    else if(binary[i]=='0')
    {
        onesComp[i]='1';
    }
}

onesComp[SIZE]='\0';

for(i=SIZE-1;i>=0;i--)
{
    if(onesComp[i]=='1'  &&  carry==1)
    {
        twosComp[i]='0';
    }
    else if(onesComp[i]=='0'  &&  carry==1)
    {
        twosComp[i]='1';
        carry=0;
    }
    else
    {
        twosComp[i]=onesComp[i];
    }
}

twosComp[SIZE]='\0';

printf(" Original binary=%s\n",binary);
printf("Ones Complement=%s\n",onesComp);
printf("twos Complement=%s\n",twosComp);

return 0;

}