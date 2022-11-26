/*
 	TÜM PROGRAM
 	BÜTÜN SAYILAR İÇİN YAPILI	
*/
#include <stdio.h>

int main() {
   int n,half;
   printf("Enter the value of n: ");
   scanf("%d",&n);
  if (n%2==0)
  {
    half=n/2;
    for( int i=1; i<=half; i++)
    {
        for(int j=1; j<=half-i; j++)
        {
            printf(" ");
        }
        if (i==1)
        {
          printf("**");
        }
        else
        {
          printf("*");
        }
        for(int k=2; k<=2*i-1; k++)
        {
            printf(" ");
        }
        if(i>1) 
		{
			printf("*");
		}
        printf("\n");
    }
  }
  else
  {
    half=(n/2)+1;
    for( int i=1; i<=half; i++)
    {
        for(int j=1; j<=half-i; j++)
        {
            printf(" ");
        }
        printf("*");
        for(int k=2; k<=2*i-2; k++)
        {
            printf(" ");
        }
        if(i>1) 
		{
			printf("*");
		}
        printf("\n");
    }
  }
  for (int i=1;i<=n;++i)
   {
     if (i==1||i==n)
     {
       int j=1;
       while (j<=n)
       {
         printf("*");
         j++;
       }
       printf("\n");
     }
     else 
     {
       int j=1;
       while (j<=2)
       {
         printf("*");
         for (int k=1;k<=n-2;k++)
         {
           printf(" ");
         }
         j++;
       }
       printf("\n");
     }
   }
}
/*
	TABAN KISMI
	ÇALIŞIYOR
	DÜZENLENMEDİ
*/
#include <stdio.h>

int main() {
   int n;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   for (int i=1;i<=n;++i)
   {
     if (i==1||i==n)
     {
       int j=1;
       while (j<=n)
       {
         printf("*");
         j++;
       }
       printf("\n");
     }
     else 
     {
       int j=1;
       while (j<=2)
       {
         printf("*");
         for (int k=1;k<=n-2;k++)
         {
           printf(" ");
         }
         j++;
       }
       printf("\n");
     }
   }
}

/*
	ÇATI KISMI
*/
int main() {
   int n,half;
   printf("Enter the value of n: ");
   scanf("%d",&n);
  if (n%2==0)
  {
    half=n/2;
    for( int i=1; i<=half; i++)
    {
        for(int j=1; j<=half-i; j++)
        {
            printf(" ");
        }
        if (i==1)
        {
          printf("**");
        }
        else
        {
          printf("*");
        }
        for(int k=2; k<=2*i-1; k++)
        {
            printf(" ");
        }
        if(i>1) printf("*");
        printf("\n");
    }
  }
  else
  {
    half=(n/2)+1;
    for( int i=1; i<=half; i++)
    {
        for(int j=1; j<=half-i; j++)
        {
            printf(" ");
        }
        printf("*");
        for(int k=2; k<=2*i-2; k++)
        {
            printf(" ");
        }
        if(i>1) printf("*");
        printf("\n");
    }
  }
 }
/*
DÜZGÜN KARELİ PROGRAM
*/
#include <stdio.h>

int main() {
   int n,half, space, space_limiter;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   space_limiter=2*(n-2)+1;
  if (n%2==0)
  {
    half=n/2;
    int i=1;
    while (i<=n)
    {
      for (space=i; space<n;space++)
      {
        printf(" ");
      }
      if (i==1)
      {
        printf("**");
        printf("\n");
      }
      else
      { 
        int j=1;
        while (j<=2)
        {
          printf("*");
          for (int k=1;k<=space_limiter;k++)
          {
            printf(" ");
          }
          j++;
        }
        printf("\n");
      }
      i++;
    }
  }
  else
  {
    half=(n/2)+1;
    int i=1;
    while (i<=n)
    {
      for (space=i; space<=n;space++)
      {
        printf(" ");
      }
      if (i==1)
      {
        printf("*");
        printf("\n");
      }
      else
      { 
        int j=1;
        while (j<=2)
        {
          printf("*");
          for (int k=1;k<=space_limiter;k+=2)
          {
            printf(" ");
          }
          j++;
        }
        printf("\n");
      }
      i++;
    }
  }
  for (int i=1;i<=n;++i)
   {
     if (i==1||i==n)
     {
       int j=1;
       while (j<=n)
       {
         printf("* ");
         j++;
       }
       printf("\n");
     }
     else 
     {
       int j=1;
       while (j<=2)
       {
         printf("*");
         for (int k=1;k<=space_limiter;k++)
         {
           printf(" ");
         }
         j++;
       }
       printf("\n");
     }
   }
}