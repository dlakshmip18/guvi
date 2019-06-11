#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,*arr,itr,count[10]={0};
	long long int num=0;
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(itr=0;itr<n;itr++)
	{
		scanf("%d",&arr[itr]);
		count[arr[itr]]++;
	}
	for(itr=9;itr>=0;itr--)
		while(count[itr]>0)
		{
			num=num*10+itr;
			count[itr]--;
		}
	printf("%lld",num);
}
