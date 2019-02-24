#include<stdio.h>
int main()
{
	int a,b,c;
	int sum;
	float avg;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	avg=sum/3;
	printf("Sum is :%d\navg is %.2f",sum,avg);
	return 0;
	
}
