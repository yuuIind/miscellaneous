#include <stdio.h>

int main ()
{
  int numlist[1000], samedigit[1000];
  int firstdigit, lastdigit, index = 0, index2=0, n, var=0;
  int *varptr;
  varptr = &n;
  printf("Start entering between 9 and 1000 numbers, enter -1 in order to quit\n");
  printf("Enter a number: \n");
  scanf("%d", &n);
  for (int i = 0; n != -1; i++)
  {
    numlist[i] = n;
    index = i;
    printf("Enter a number: \n");
    scanf("%d", &n);
  }
  for (int i = 0; i <= index; i++)
  {
    *varptr = numlist[i];
    firstdigit = *varptr;
    lastdigit = *varptr;
    while ( firstdigit >= 10)
    {
      firstdigit = firstdigit / 10;
    }
    lastdigit = lastdigit % 10;
    if (firstdigit == lastdigit)
    {
      samedigit[index2] = n;
      index2++;
    }
  }
  for (int i = 0; i < index2; i++)
  {
    printf("%d ", samedigit[i]);
  }
  return 0;
}