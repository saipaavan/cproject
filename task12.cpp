#include<stdio.h>
 int main ()
{
 float a,b,centigrade, fahrenheit;
 int x;
 printf("1. Celsius To Fahrenheit\n");
 printf("2. Fahrenheit To Celsius\n");
 printf("3. Exit\n");
 scanf("%d",&x);
 switch(x)
 {
 case 1:
	printf("\nEnter The Value of Celsius Temperature: ");
  scanf("%f",&b);
  fahrenheit=((9*b)/5)+32;
  printf("\nFahrenheit Temperature: %f ",fahrenheit);
  break;
 case 2:
	printf("\nEnter The Value of Fahrenheit Temperature: ");
	scanf("%f",&a);
	centigrade=5*(a-32)/9;
	printf("\nCelsius Temperature: %f ",centigrade);
	break;
 }
 return 0;
}
