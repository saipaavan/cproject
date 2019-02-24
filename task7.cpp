#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30], s2[30];
	printf("Enter a word");
	scanf("%d",&s1);
    strcpy(s2,s1);
    strrev(s2);
    
	if(strcmp(s1,s2)==0)
	{
		printf("the word is a palindrome");
		
	}
	else
	{
	printf("the word not a palindrome");
	}
	return 0;
	
}
