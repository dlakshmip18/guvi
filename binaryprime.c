#include<stdio.h>
int convert(long long int num)
{
	int count=0;
	while(num)
	{
		if(num%2==1)
		count++;
		num/=2;
	}
	//printf("count : %d ",count);
	return count;
}
int isPrime(int num)
{
	int i,flag=0;
	for(i = 2; i <= num/2; ++i)
    {
        if(num%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0&&num!=1)
    return 1;
	return 0;
}
int main()
{
	long long int r1,r2,itr;
	int noO,prime,count=0;
	scanf("%lld%lld",&r1,&r2);
	for(itr=r1;itr<=r2;itr++)
	{
		noO=convert(itr);
		if(isPrime(noO)==1)
		count++;
	}	
	printf("%d",count);	
}
