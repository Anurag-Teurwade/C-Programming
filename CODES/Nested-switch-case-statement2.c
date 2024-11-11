#include<stdio.h>
int main()
{
int a,b;
printf("1.Department of Computer Science\n");
printf("2.Department of Electrical\n");
printf("3.Department of Mechanical\n");
printf("4.Department of Civil\n");
printf("Make your selection:\n");
scanf("%d",&a); 
switch(a)
{
    case 1:
    printf("Available Domains in Computer Science\n");
    printf("1.Artifical Integillence\n");
    printf("2.Data Science\n");
    printf("Make your selection:\n");
    scanf("%d",&b);

switch(b)
{
    case 1:
    printf("You choosen Artifical Integillence\n");
    break;
    case 2:
    printf("You choosen Data Science\n");
    break;
    default:
    printf("Invalid Selection!");
    break;
}
break;
default:
printf("Invalid Selection!");
break;
}
return 0;
}
