#include<stdio.h>
int main()
{
	int num,rev=0,rem=0;
	printf("enter a number");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
    }
    printf("The reverse number %d",rev);
return 0;
}
