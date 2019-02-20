#include<stdio.h>
int main() {


float celsius,fahrenheit;

printf("Enter Temperature in Fahrenheit : ");
scanf("%f",&fahrenheit);

celsius = 5 * ((fahrenheit - 32)/9);

printf("The Temperature in Celsius = %.2f\n",celsius);

return  0;
}
