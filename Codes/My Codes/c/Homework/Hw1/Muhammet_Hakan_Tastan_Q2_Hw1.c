#include <stdio.h>

int sum_interval(int a, int b);
int main () {
    int x, y, m, n, sum;
    printf("Enter the numbers with a blank between them\n");
    scanf("%d %d %d %d", &x, &y, &m, &n);
    sum= sum_interval(x, y) + sum_interval(m, n);
    printf("sum is %d\n", sum);
    return 0;
}

int sum_interval(int a, int b)
{
  int i, result=0;
  for (i=0;i<(b-a)+1;i++)
  {
    result= result + (a+i);
  }
  return result;
}
