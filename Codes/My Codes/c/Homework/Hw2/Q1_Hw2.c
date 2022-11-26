#include <stdio.h>

int main(void) {
  int n, i=0, o_list[100], sum=0;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  while (n>=1)
  {
    if (n%3==0)
    {
      if (n%2==0 || n%5==0)
      {
        n=n-1;
      }
      else
      {
        o_list[i]=n;
        sum=sum+n;
        n=n-1;
        i=i+1;
      }
    }
    else
    {
      n=n-1;
    }
  }
  for (int c=0;c<=i-1;c++)
  {
    printf("%d ", o_list[c]);
  }
  printf("\nsum is %d", sum);
  return 0;
}
