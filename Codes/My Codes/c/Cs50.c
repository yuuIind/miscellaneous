//Week 1 Assignment 1: Hello

#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string n = get_string("Could you tell me your name?\n");
    printf("Hello, %s\n", n);
}

//Week 1 Assignment 2: Mario basic

#include <stdio.h>

int main(void) {
  int height;
  do
  {
    printf("Enter the height: "); //Kontrol
    scanf("%d", &height);
  } while ((height <1) || (height >8));
  
  for (int line = 0; line < height; line++) //line = satırın yönetimi için 
  {
    for (int distance = line; distance < height; distance++) // distance konulması gereken boşluk sayısı
    {
      printf(" ");
    }
    for (int block = height-line; block <= height; block++) // konulması gereken #
    {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}

//cs50 sandbox hali
#include <cs50.h>
#include <stdio.h>

int main(void) {
  int height;
  do
  {
    height = get_int("Enter the height: ");
  } while ((height <1) || (height >8));
  
  for (int line = 0; line < height; line++) //line = satırın yönetimi için 
  {
    for (int distance = line; distance < height; distance++) // distance konulması gereken boşluk sayısı
    {
      printf(" ");
    }
    for (int block = height-line; block <= height; block++) // konulması gereken #
    {
      printf("#");
    }
    printf("\n");
  }
}


//Week 1 Assignment 2: Mario Advance

#include <stdio.h>
int main(void) {
  int height;
  do
  {
    printf("Enter the height: ");  // Kontrol
    scanf("%d", &height);
  } while ((height <1) || (height >8));
  
  for (int line = 0; line < height; line++) //line satırdaki elementlerin kontrolünü sağlar
  {
    for (int distance = line; distance < height; distance++) //satır başındaki gerekli uzaklık
    {
      printf(" ");
    }
    for (int  blockL= height-line; blockL <= height; blockL++) //sol üçgen için gerekli #
    {
      printf("#");
    }
    for (int space = 0; space < 2; space++) //aralarındaki boşluk; her satırda sabit 
    {
      printf(" ");
    }
    for (int blockR = height-line; blockR <= height; blockR++) // sağ üçgen için gerekli #
    {
      printf("#");
    }
    printf("\n");  
  }
  return 0;
}

//cs50 hali

#include <cs50.h>
#include <stdio.h>

int main(void) {
  int height;
  do
  {
    height = get_int("Enter the height: ");
  } while ((height <1) || (height >8));
  for (int line = 0; line < height; line++) 
  {
    for (int distance = line; distance < height; distance++) 
    {
      printf(" ");
    }
    for (int  blockL= height-line; blockL <= height; blockL++) 
    {
      printf("*");
    }
    for (int space = 0; space < 2; space++) 
    {
      printf(" ");
    }
    for (int blockR = height-line; blockR <= height; blockR++) 
    {
      printf("*");
    }
    printf("\n");  
  }
}


//Week 2 Assignment 3: Cash

#include <stdio.h>//çalışmıyor cs50 çalışıyor
#include <math.h>

int changecal(int *x, int constant);

int main(void) {
  float change;
  int quarter = 0, dime = 0, nickel = 0, penny = 0;
  do{
  	printf("change owed: ");
  	scanf("%f\n", &change);
  } while(change <= 0);
  int changeIncent = round(change*100);
  if (changeIncent >= 25)
  {
    quarter = changecal(&changeIncent, 25);
  }
  else if (changeIncent >= 10)
  {
    dime = changecal(&changeIncent, 10);
  }
  else if (changeIncent >=5)
  {
    nickel = changecal(&changeIncent, 5);
  }
  else if (changeIncent > 0)
  {
    penny = changecal(&changeIncent, 1);
  }
  int cash = quarter + dime + nickel + penny;
  printf("%d", cash);
  return 0;
}

int changecal(int *x, int constant)
{
  int res = *x / constant;
  *x = *x % constant;
  return res;
}

//cas50 ver.
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int calc (int *sum, int constant);

int main (void)
{
    float change = -1;
    do
    {
        change = get_float ("Change owed: ");
    } while (change < 0);
    int cent = round (change * 100);
    int quarter = 0, dime = 0, nickel = 0, penny = 0;
    quarter = calc(&cent, 25);
    dime = calc(&cent, 10);
    nickel = calc(&cent, 5);
    penny = calc(&cent, 1);
    int result = quarter + dime + nickel + penny;
    printf("%d", result);
}

int calc (int *sum, int constant)
{
    int res = 0;
    while (*sum >= constant)
    {
        *sum = *sum - constant;
        res++;
    }
    return res;
}




//W3 ASSIGNMENT 1 CAESAR cs50ver
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void decipher (int key, string text);

int main(int argc, string argv[])
{
    
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (!isdigit(*argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int cip_key = atoi(argv[1]);
    string plain = get_string("Plain text: ");
    decipher (cip_key, plain);
    
}

void decipher (int key, string text)
{
    int n = strlen(text), den = ('Z'- 'A') + 1;
    char cipher[n];
    if (key > den)
    {
        while (key > den)
        {
            key = key - den;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int constant = 0,temp = (int) text[i] + key;

        if ((text[i] >= 'A') && (text[i] <= 'Z'))
        {
            constant = ('Z' - text[i]) + 1;
            if ((temp <= 'Z') && (temp >= 'A'))
            {
                cipher[i] = (char) temp;
            }
            else
            {
                cipher[i] = 'A' + (key - constant);
            }
        }
        else if ((text[i] >= 'a') && (text[i] <= 'z'))
        {
            constant = ('z' - text[i]) + 1;
            if ((temp <= 'z') && (temp >= 'a'))
            {
                cipher[i] = (char) temp;
            }
            else
            {
                cipher[i] = 'a' + (key - constant);
            }
        }
        else
        {
            cipher[i] = text[i];
        }
    }
    printf("ciphertext: %s\n", cipher);
}


//W3 assignmet 2 Vigenere cs50
