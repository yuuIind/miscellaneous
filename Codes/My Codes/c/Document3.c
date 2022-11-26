//Hipotenüsü Bulma
//Hipotenüsü Bulma
//Hipotenüsü Bulma

/*Yol 1 */
#include <stdio.h>
#include <math.h>

int main() {
  float x, y;
  printf("Enter the sides of rectangle\n");
  scanf("%f %f", &x, &y);
  float hipo = hypotf(x, y);
  printf("The hypotenuse is equals to %f", hipo);
  return 0;
}


/* Yol 2 */
#include <stdio.h>
#include <math.h>

double hypo (double a, double b);

int main() {
  double x, y;
  printf("Enter the sides of rectangle\n");
  scanf("%lf %lf", &x, &y);
  double hipo = hypo(x, y);
  printf("The hypotenuse is equals to %lf", hipo);
  return 0;
}

double hypo (double a, double b)
{
  return sqrt( pow(a,2) + pow(b,2) );
}