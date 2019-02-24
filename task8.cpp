#include<stdio.h>
int main ()
{
	int x, i=0, a;
	printf("Enter an interger");
	scanf("%d",&x);
	for(i=0;i<=10;i++)
	{  
	    a=x*i;
		printf("\n %dx%d=%d ", x,1,a);
	}
	return 0;
}
