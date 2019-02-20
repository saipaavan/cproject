#include <stdio.h>
main()
{
	char name[15];
	int age=0;
	char pnum[10];
	printf("enter the name");
	scanf("%s",&name);
	printf("enter age");
	scanf("%d",&age);
	printf("enter phone number");
	scanf("%s",&pnum);
	printf("Name:%s,Age:%d,phone number:%s",name,age,pnum);
}
