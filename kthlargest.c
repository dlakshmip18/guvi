#include<stdio.h>
void maxHeapify(int * arr , int scope , int parent);
void swapper(int *arr , int ind1 , int ind2);
int main()
{
	int arr[100];
	int size,scope,parent,ind,k ;
 	scanf("%d%d",&size,&k);
 	for(ind=0;ind<size;ind++)
 	scanf("%d",&arr[ind]);
 	scope =size-1;
  	for(parent = (scope-1)/2; parent >=0 ; parent--)
    maxHeapify(arr,scope,parent);
 	swapper(arr,0,scope);
 	scope--;
 	while(scope)
 	{
	    maxHeapify(arr,scope,0);
	    swapper(arr,0,scope);
	    scope--;
 	}
	printf("%d",arr[size-k]);
	return 0 ;
}
void swapper(int *arr , int ind1 , int ind2)
{
	int temp;
  	temp =arr[ind1];
  	arr[ind1] = arr[ind2];
  	arr[ind2] =temp;
}
void maxHeapify(int * arr , int scope , int parent)
{
	int left,right;
	left = parent*2+1;
	right = left  +1;
	if(left>scope)
	return;
    if(left == scope)
   	{
    	if(arr[parent] < arr[left])
       	swapper(arr,parent,left);
   	}
   	else if(right<=scope)
    {
	    if(arr[parent] < arr[left] || arr[parent] < arr[right] )
	    {
	    	if(arr[left] > arr[right])
	      	{
		       swapper(arr,parent,left);
		       maxHeapify(arr,scope,left);
		    }
	      	else
		    {
		       swapper(arr,parent,right);
		       maxHeapify(arr,scope,right);
		    }
	    }
    }
}




