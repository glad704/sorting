#include<stdio.h>
int insertion_sort(int [],int);
int main()
{
	int A[] = {33,22,55,1,11,44};
	int N=6;
	printf("Data before insertion sort are: \n");
	for(int i=0;i<=N-1;i++)
	{
		printf("%d,",A[i]);
	}
	printf("\n");
	insertion_sort(A,N);
	printf("Data after insertion sort are: \n");
	for(int i=0;i<=N-1;i++)
	{
		printf("%d,",A[i]);
	}
	printf("\n");
	return 0;
}

int insertion_sort(int A[],int N)
{
	int temp;
	for(int i=1;i<=N-1;i++)
	{
		temp = A[i];
		for(int j=i-1;j>=0&&temp<A[j];j--)
		{
			A[j+1] = A[j];
			A[j] = temp;
		}
	}
	return 0;
}
