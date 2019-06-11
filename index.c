#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,*arr,itr,flag=0;
	long long int num=0;
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(itr=0;itr<n;itr++)
	scanf("%d",&arr[itr]);
	for(itr=0;itr<n;itr++)
	{
		if(itr==arr[itr])
		{
			printf("%d ",arr[itr]);
			flag=1;
		}
	}
	if(flag==0)
	printf("-1");
}
