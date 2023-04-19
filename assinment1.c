#include<stdio.h>

main()
{
	char ch;
	
	
	
	
	printf("enter your value ");
	scanf("%c",&ch);
	
	
	if(ch>='A' && ch<='Z')
	{
		printf("this value is in first alphabet");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("this value is in small alphabet");
	}
	else if(ch>='0' && ch<='99')
	{
		printf("this is number value");
	}
	else
	{
		printf(" this is special character");
	}
}
