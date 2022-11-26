// 1. ÖRNEK
//
//
//
#include <stdio.h>

int main(void) {
  int table; i=1, result;
  table=12;
  while (i<=10) {
    result=table*i;
    printf("%d*%d is equals to %d.\n", table, i, result);
    i=1+i;
  }
  return 0;
}

// 2. ÖRNEK
//sınav sonuçlarını alır girilen sonuç sayısını sonuçların toplamı maxı
//mini ortalamayı verir
//

#include <stdio.h>

int main(void) {
  int result, min, max, total, number;
  min=0;
  max=0;
  total=0;
  number=0;
  do {
    printf("Enter assigment scores please (enter -1 in order to finish entering)\n");
    scanf("%d", &result);
    if (result !=-1) {
      number=number + 1;
      total=result+total;
	  if (result>=max) {
	  	max=result;
	  }
	  else {
	  	min=result;
	  }
    }  	
  } while (result !=-1);
  printf("The summary of assignment is as follows:\n");
  printf("Total number of points earned:%d \n", total);
  printf("Total number of assignments graded:%d \n", number);
  printf("Minimum score is %d \n", min);
  printf("Maximum score is %d \n", max);
  float average;
  average=(float)total/number;
  printf("Mean score is %f \n", average);
  return 0;
}

// 3. Örnek
//
//büyük olanı verir girilen 2 sayıdan

#include <stdio.h>

int main(void) {
  int num1, num2;
  while(1){

  
  printf("enter first number please\n");
  scanf("%d",&num1);
  printf("enter second number please\n");
  scanf("%d",&num2);
  if (num1>num2) {
    printf("%d is bigger than %d\n",num1,num2);
  }
  else {
    printf("%d is bigger than %d\n",num2,num1);
  }
  }
  
  return 0;
}


//4. ÖRNEK
// girilen 10 sayı asalsa 1 değilse 2 değeri alarak çıkar
//
//

#include <stdio.h>

int prime (int num1);
int main(void) {
  int array_1[10];
  int array_2[10];
  int i, num, num_r;
  for (i=0; i<11; i++){
    printf("Enter a number\n");
    scanf("%d",&num);
    num_r=prime(num);
    array_1[i]=num;
    array_2[i]=num_r;
  }
  printf("birinci liste:\n");
  for(i=0;i<10;i++) {
    printf("%d\n", array_1[i]);
  }
  printf("ikinci liste:\n");
  for(i=0;i<10;i++) {
    printf("%d\n", array_2[i]);
  }
  return 0;
}

int prime (int num1){
  int prime,i;
  for (i=2;i<num1; i++ ) {
    if (num1%i) {
      return 1;
    }
  }
  return 2;
}

//
// 5.Örnek
//kullanıcı girilecek data sayısını belirler ardından datalar girilir
//dataların toplamı ve aralarındaki en büyük çıktı olarak verilir

#include <stdio.h>

int main(void) {
  int n,array_1[n],i,num;
  int max=0,sum=0;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("girmeye başlayınız\n");
  for(i=0;i<n;i++){
    scanf("%d",&num);
    array_1[i]=num;
    if (num>max){
      max=num;
    }
    sum=num+sum;
  }
  printf("sum is %d and max is %d",sum,max);
  return 0;
}


//
// 6.Örnek
//
//max 10 sayı alır negatif toplam pozitif toplam ve ortalamyı verir
//
#include <stdio.h>

int main(void) {
  int n,A[n],i;
  int max=0,sum_neg=0,sum_pos;
  float ave;
  printf("Enter number of elements (limit is 10)\n");
  scanf("%d",&n);
  if (n>10) {
    printf("you entered a number bigger than limit");
    return 0;
  }
  else {
    printf("girmeye başlayınız\n");
    for(i=0;i<n;i++){
      scanf("%d",&A[i]);
      if (A[i]>0) {
        sum_pos=sum_pos+A[i];
      }
      else if (A[i]==0){
        ;
      }
      else {
        sum_neg=sum_neg+A[i];
      }
      ave=(float)(sum_neg+sum_pos)/n;
    }
  printf("average is %f\n",ave);
  printf("sum_neg is %d\n", sum_neg);
  printf("sum_pos is %d\n",sum_pos);
  return 0;
  }
}

//7.Örnek
//Tam Çalışmıyor düzelt!!!!!!
//4 sayı al max 2 tanesinin toplamını ortalamasını ve 4 sayıyı yazdırır
//
//
#include <stdio.h>

int main(void) {
  int array_1[4],i,sum=0,max1=0,max2=0;
  printf("4 sayı giriniz\n");
  for (i=0;i<4;i++){
  scanf("%d",&array_1[i]);
  if(array_1[i]>max1){
    max1=array_1[i];
  }
  else if (array_1[i+1]>max2){
    max2=array_1[i];
  }
  }
  float ave;
  sum=max1+max2;
  ave=(float)sum/2;
  printf("average of largest two numbers is %f\n",ave);
  printf("max is %d, second max is %d\n",max1,max2);
  printf("numbers are:\n");
  for (i=0;i<4;i++) {
    printf("%d\n",array_1[i]);

  }
  return 0;
}
/*
	8. Örnek 
	öğrenci id girilir -1 girilinceye kadar not alınmaya başlanır
	negatif id girilene kadar devam eder
*/

#include <stdio.h>

int main(void) {
  int id,note;
  int i=0,sum=0;
  float ave;
  printf("Enter your student id\n");
  scanf("%d",&id);
  while (id>=0){
  
    printf("Enter the next homework for student with id: %d\n",id);
    scanf("%d",&note);
    while (note!=-1) {
      sum=sum+note;
      i=i+1;
      printf("Enter the next homework for student with id: %d\n",id);
      scanf("%d",&note);
    }
    
    if (sum==0){
      printf("id of the student: %d, average: no note entered\n", id);
      printf("Enter your student id\n");
      scanf("%d",&id);
      sum=0;
      i=0;
    }
    else {
      ave=(float)sum/i;
      printf("id of the student: %d, average: %lf\n", id,ave);
      printf("Enter your student id\n");
      scanf("%d",&id);
      sum=0;
      i=0;
      
    }
  } 
  printf("Good bye");
  return 0;
}

/*
	9
	tamamlanmadı girilen kelimenin son harfini veriyor
*/
#include <stdio.h>

void latter (char arr[],int n);
int main(void) {
int n;
char arr[n];
printf("enter the lenght:\n");
scanf("%d",&n);
printf("enter the word:\n");
scanf("%s", &arr[n]);
void latter (char arr[], n);
  return 0;
}

void latter (char arr[],int n){
  char l;
  l=arr[n];
  printf("%c",l);
}
/*
	10
	İki sayı alıp istenek aritmetik işlemi yapar
*/
#include <stdio.h>

int main(void) {
  int a,b,k,res=0;
  printf("enter a and b\n");
  scanf("%d %d", &a, &b);
  for (int i=a; i<=b;i++){
    for (int j=i;j<=b;j++){
      k=(j+(4*a)-(2*b));
      res=res+k;
    }
  }
  printf("%d",res);
  return 0;
}
/*
	11
	TERS sayı piramidi bastırma
*/

#include <stdio.h>

int main(void) {
  int x;
  printf("Hello World\n");
  scanf("%d", &x);
  for (int i=x; i>0;i--)
  {
    for (int k=i; k!=x;++k)
    {
      printf(" ");
    }
    for (int j=i; j>0; --j)
    {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}


/*
	12
	İkişerli artan sayı piramidi
*/

#include <stdio.h>

int main(void) {
  int n, i, s=1;
  printf("enter n\n");
  scanf("%d", &n);
  while (s<=n)
  {
    i=1;
    while (i<=s)
    {
      printf("%d",i);
      i=i+2;
    }
    s=s+2;
    printf("\n");
  }
  printf("\n");
  return 0;
}

/* 
	13
	İstenen karakterin sıklığını bulma 
	ÇALIŞMIYOR/ Mantığı hatalı
*/
#include <stdio.h>

int main(void) {
  char arr1[100], key;
  int i=0, freq=0;
  printf("Enter a string\n");
  scanf("%s", arr1);
  printf("Enter a character\n");
  scanf("%c", &key);
  if (arr1[i]==key)
  {
    freq=freq+1;
    i=i+1;
  }
  else
  {
    i=i+1;
  }
  printf("%d", freq);

  return 0;
}

/*
	14
	Sonu istenen karakterle biten kelimeleri yazdırır
	Çalışmıyor/ Mantığı hatalı
*/
#include <stdio.h>

int main(void) {
  char arr1[100], s[100];
  int i=0, k=0;
  printf("Enter a string\n");
  scanf("%s", arr1);
  if (arr1[i]=='S')
  {
    s[k]=arr1[i];
    k++;
    i++;
  }
  else
  {
    i++;
  }
  for (i=0; i<k;i++){
  printf("%s", s);
  }

  return 0;
}

/*
	15
	Kelime Sayısı Bulucu
	Çalışmıyor
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  char arr1[100], s[100];
  int i=0, k=0,t;
  printf("Enter a string\n");
  scanf("%s\n", arr1);
  for (int j=0;j<strlen(arr1);j++)
  {
    if (arr1[i] == ' ')
    {
      k=k+1;
      i=i+1;
    }
    else
    {
      i=i+1;
    }
  }
  printf("Number of words is %d", k);

  return 0;
}
/*
	Uzunluğu ve elementleri girilen listenin içindeki aynı iki 
	elaman arasındaki değerleri yazdıran program
*/

#include <stdio.h>

int main ()
{
  int ind1=-1,ind2=-1,n;
  printf("enter the length of list: \n");
  scanf("%d",&n);
  int arrays[n];
  for (int i=0; i<n; i++)
  {
    printf("Enter the element of list: \n");
    scanf("%d", &arrays[i]);
  }
  for (int i=0;i<10;i++)
  {
    if (arrays[i]==0)
    {
      if (ind1==-1)
      {
      ind1=i+1;
      }
      else
      {
        ind2=i-1;
      }
    }
  }
    
  for (int i=ind1;i<=ind2;i++)
  {
    printf("%d ", arrays[i]);
  }
}

/* 
	Girilen dizideki a ile başlayan kelimelerin sayısını bulan program
*/

#include <stdio.h>

int main(void) {
  int count=0, i=0;
  char charac='a', space=' ', str[100];
  printf("Enter: \n");
  fgets(str, sizeof (str), stdin);
  while (str[i] != '\0')
  {
    if (i==0 && str[i] != space)
    {
      if (str[i] == charac)
      {
        count= count + 1;
      }
    }
    else 
    {
      if (str[i] == space && str[i+1] == charac)
      {
        count = count + 1;
      }
    }
    i++;
  }
  printf("Number of words starting with %c is %d\n", charac, count);
  return 0;
}

/*
	2 sayı alıp onlara  4 işlem uygulayan program
	pointer ile
*/
#include <stdio.h>

void calculator (int *num1, int *num2);
int main(void) {
  int num1, num2;
  printf("Enter first and second values with a blank between them\n");
  scanf("%d %d", &num1, &num2);
  calculator(&num1, &num2);
  return 0;
}

void calculator (int *num1, int *num2)
{
  int mult, sub, add, div;
  add= *num1 + *num2;
  sub= *num1 - *num2;
  mult= *num1 * *num2;
  div= *num1 / *num2;
  printf("%d %d %d %d", add, sub, mult, div);

}

/* takes an int from user  if it is odd then multiply it and add 1 if it
is even divide by 2 continues 'til remains 1 */

#include <stdio.h>

int main(void) {
  int n, valn[100], i = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  valn[i] = n;
  while (n != 1)
  {
    if (n % 2 == 0)
    {
      n = n / 2;
      i++;
      valn[i] = n;
    }
    else 
    {
      n = (n * 3) + 1;
      i++;
      valn[i] = n;
    }
  }
  for (int j = 0; j <= i; j++)
  {
    printf("%d, ", valn[j]);
  }
  return 0;
}

// Sola genişleyen dik üçgen  commentli hali cs50 dosyasında: w1a2 mario basic

#include <stdio.h>

int main(void) {
  int h;
  printf("Enter the height: ");
  scanf("%d", &h);
  for (int i = 0; i < h; i++)
  {
    for (int j = i; j < h; j++)
    {
      printf(" ");
    }
    for (int k = h-i; k <= h; k++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

// Aralarında sabit genişlikte boşluk olan iki dik üçgen commentli hali cs50 dosyasında: w1a2 mario advance

#include <stdio.h>

int main(void) {
  int height;
  printf("Enter the height: ");
  scanf("%d", &height);
  for (int i = 0; i < height; i++) // BU NE İÇİN AQ
  {
    for (int j = i; j < height; j++) //ilk üçgen
    {
      printf(" ");
    }
    for (int k = height-i; k <= height; k++) //++
    {
      printf("*");
    }
    for (int space = 0; space < 2; space++) //Üçgenler arasındaki boşluk
    {
      printf(" ");
    }
    for (int k = height-i; k <= height; k++) //ikinci üçgen
    {
      printf("*");
    }
    for (int j = i; j < height; j++) //++
    {
      printf(" ");
    }
    printf("\n");  
  }
  return 0;
}
