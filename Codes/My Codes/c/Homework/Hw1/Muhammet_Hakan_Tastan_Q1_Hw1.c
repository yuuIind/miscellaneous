#include <stdio.h>

double average (int a, int b, int c);

int main ()
{
    int x, y, z;
    double k, t;
    printf("Enter the numbers with a blank between them\n");
    scanf("%d %d %d",&x, &y, &z);
    k=average(x,y,z);
    t=(double)((x-k)*(x-k))+((y-k)*(y-k))+((z-k)*(z-k));
    printf("t is %lf\n", t);
    printf("k is %lf\n", k);
	return 0;
}

double average (int a, int b, int c)
{
    double ave;
    ave=(double) (a+b+c)/3;
    return ave;
}


