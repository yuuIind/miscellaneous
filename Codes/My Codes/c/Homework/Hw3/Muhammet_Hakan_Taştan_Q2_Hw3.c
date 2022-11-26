#include <stdio.h>

int main(void) {
  int coin_type, i=1, j=0, num=0, sum=0;
  int lira=0, kurus=0;
  while (i != -1)
  {
    printf("Enter the coin type: \n");
    scanf("%d", &coin_type);
    if (coin_type == 50)
    {
      printf("How many: \n");
      scanf("%d", &num);
      sum = sum + num*50;
    }
    else if (coin_type == 25)
    {
      printf("How many: \n");
      scanf("%d", &num);
      sum = sum + num*25;
    }
    else if (coin_type == 10)
    {
      printf("How many: \n");
      scanf("%d", &num);
      sum = sum + num*10;
    }
    else if (coin_type == 5)
    {
      printf("How many: \n");
      scanf("%d", &num);
      sum = sum + num*5;
    }
    else if (coin_type == -1)
    {
      lira = sum / 100;
      kurus = sum % 100;
      printf("You have %d lira and %d kurus\n", lira, kurus);
      i = coin_type;
    }
    else
    {
      if (j == 1)
      {
        lira = sum / 100;
        kurus = sum % 100;
        printf("You have %d lira and %d kurus\n", lira, kurus);
        i = -1;
      }
      else
      {
        printf("No such coin, enter 5, 10, 25 or  50.\n");
        j++;
      }
    }
  }
  return 0;
}
