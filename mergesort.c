#include<stdio.h>

void merge_sort(int arr[],int low,int high)
{
	if(high>low)
	{
		int middle=low+(high-low)/2;
		merge_sort(arr,low,middle);
		merge_sort(arr,middle+1,high);
		merge(arr,low,middle,high);
	}
}

void merge(int arr[],int low,int middle,int high)
{
	int left_array_size=middle-low+1;
	int right_array_size=high-middle;
	int left[left_array_size];
	int right[right_array_size];

	for(int i=0;i<left_array_size;i++)
	{
		left[i]=arr[low+i];
	}

	for(int j=0;j<right_array_size;j++)
	{
		right[j]=arr[middle+1+j];
	}

	int i=0,j=0,k=low;

	while(i<left_array_size && j<right_array_size)
	{
		if(left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
		}
		else
		{
			arr[k]=right[j];
			j++;
		}
		k++;
	}

	while(i<left_array_size)
	{
		arr[k]=left[i];
		i++;
		k++;
	}

	while(j<right_array_size)
	{
		arr[k]=right[j];
		j++;
		k++;
	}
}

int main()
{
	int arr[]={12,11,13,5,6,7};
	int N=sizeof(arr)/sizeof(arr[0]);
	printf("Array before merge sort are: \n");
	for(int i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	merge_sort(arr,0,N);
	printf("\nArray after merge sort are: \n");
	for(int i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
