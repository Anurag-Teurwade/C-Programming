#include<stdio.h>
int main()
{
    FILE*ptr=NULL;
    char string[64]="The content of this file has been changed";

    // // ****Reading a file****
    // ptr=fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file is: %s\n",string);

    // ****Writing a file****
    ptr=fopen("myfile.txt","a");
    fprintf(ptr,"%s\n",string);
    return 0;
}