#include <stdio.h>

int main ()
{
    int arrayof50int[50];
    int n, count=1, leftSide=0, rightSide=49;
    printf("Enter a number: \n");
    scanf("%d", &n);
    while (n != 0 && count <= 50)
    {
        if (n > 0)
        {
           arrayof50int[leftSide] = n;
           leftSide++;
        }
        else if (n < 0)
        {
            arrayof50int[rightSide] = n;
            rightSide--;
        }
		if (count<50)
		{
        	printf("Enter a number: \n");
        	scanf("%d", &n);
		}
        count++;
    }
    if (rightSide == 49)
    {
       printf("There isn't any negative number entered");
    }
    else
    {
        printf("The negative numbers:\n");
        for (int i = 49; i > rightSide; i--)
        {
            printf("%d ", arrayof50int[i]);
        }
    }

    return 0;
}
