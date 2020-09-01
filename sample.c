#include<stdio.h>

int min(int arr[],int k,int N)
{
	int store=arr[k];
	int loc=k;
	for(int j=k+1;j<=N-1;j++)
	{
		if(store>arr[j])
		{
			store=arr[j];
			loc=j;
		}
	}
	return loc;
}

int main()
{
	int temp,loc;
	int arr[]={64,25,12,22,11};
	int N=sizeof(arr)/sizeof(arr[0]);
	printf("Array before sorting are: \n");
	for(int i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	for(int i=0;i<N-1;i++)
	{
		loc=min(arr,i,N);
		temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
	}
	printf("\nArray after sorting are: \n");
	for(int i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
