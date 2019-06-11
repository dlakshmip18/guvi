#include<stdio.h>
#include<ctype.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(isdigit(num))
	{
		if(num>0)
		printf("Positive");
		else if(num<0)
		printf("Negative");
		else
		printf("Zero");
	}
	else
	printf("Invalid");
}
