#include<stdio.h>
int main()
{
	long long int num,i,fact=1;
	scanf("%lld",&num);
	if(num<=20&&num>=0)
	{
		for(i=num;i>0;i--)
		fact*=i;
		printf("%lld",fact);
	}
}
