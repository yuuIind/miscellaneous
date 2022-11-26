//Alınan değerin karesini bulmak
//Alınan değerin karesini bulmak
//Alınan değerin karesini bulmak

#include <stdio.h>

double square (int a);

int main () {
  double value1;
  printf("Enter a value\n");
  scanf("%lf", &value1);
  double result =square(value1);
  printf("The square of %lf is %lf", value1,result);
  return(0);
}

double square (int a){
  return a*a;
}