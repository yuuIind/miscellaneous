#include <stdio.h>

int main(void) {
  int sum=0, min=1000000000, n;
  float ave;
  for (int i = 1; i <= 10; i++)
  {
    printf("Enter number %d: \n", i);
    scanf("%d", &n);
    sum = sum + n;
    if (n <= min)
    {
      min = n;
    }
  }
  ave = (float) sum / 10;
  printf("The minimum number is %d; \nThe sum of all element is %d; \nThe average of the number is %f\n", min,sum,ave);
  return 0;
}
