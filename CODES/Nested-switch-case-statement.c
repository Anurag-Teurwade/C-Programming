#include<stdio.h>
int main()
{
int ID,password;
printf("Please enter your ID:");
scanf("%d",&ID);
switch(ID)
{
    case 500:
    printf("Enter your password:");
    scanf("%d",&password);

switch(password)
{
    case 9612:
    printf("Welcome Dear Coder!");
    break;
    default:
    printf("Incorrect password");
    break;
}    
    break;
    default:
    printf("Incorrect ID");
    break;
} 
return 0;
}