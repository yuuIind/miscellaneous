//Alınan iki sayıdan büyük olanı bulmak
//Alınan iki sayıdan büyük olanı bulmak
//Alınan iki sayıdan büyük olanı bulmak

#include <stdio.h> 

void max (int a,int b);

int main ()
{
  int value1, value2;
  printf("Please enter first value \n");
  scanf("%d", &value1);
  printf("Please enter second value \n");
  scanf("%d", &value2);
  max(value1,value2);
  return (0);
}


void max (int a,int b)
{
  if (a>b)
  {
    printf("The value %d is greater.", a);
  }
  else 
  {
    printf("The value %d is greater.", b);
  }
}