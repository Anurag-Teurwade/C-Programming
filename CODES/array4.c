#include<stdio.h>
#define MAX_SIZE 100

int main()
{
  int arr[MAX_SIZE];
  int i,size,even,odd;

  printf("Enter the size of array:");
  scanf("%d",&size);

  printf("Enter the element of array:");

  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }  

  even=0;
  odd=0;
  
  for(i=0;i<size;i++)
  {
    if(arr[i]%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
  }
  printf("Total number of even:%d\n",even);
  printf("Total number of odd:%d",odd);
  return 0;
}