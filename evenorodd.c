#include<stdio.h>
int main()
{
	long long int num;
	scanf("%lld",&num);
	if(num>0)
	(num%2==0)?printf("Even"):printf("Odd");
	else
	printf("invalid");
}
