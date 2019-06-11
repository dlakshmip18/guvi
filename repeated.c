#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,*arr,itr1,itr2,count=0,flag=0;
	long long int num=0;
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(itr1=0;itr1<n;itr1++)
	scanf("%d",&arr[itr1]);
	for(itr1=0;itr1<n;itr1++)
	{
		count=1;
		for(itr2=itr1+1;itr2<n;itr2++)
		if(arr[itr1]==arr[itr2])
		count++;
		if(count>1)
		{
			printf("%d",arr[itr1]);
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("unique");
}
