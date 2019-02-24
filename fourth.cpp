#include <stdio.h>
int main()
 {
 char first_name[30], last_name[20];
 printf("Enter First Name: "); 
gets(first_name); 
printf("Enter Last Name: ");
 gets(last_name); 
strcat(first_name, last_name); 
printf("%s", first_name);
 return 0; 
}
