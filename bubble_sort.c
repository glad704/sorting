#include<stdio.h>
int bubble_sort(int [],int);
int main()
{
	int A[] = {34,15,29,8};
	int N=4;
	printf("\n");
	printf("Size of array is: %d\n",N);
	printf("Data before bubble sort are: \n");
	for(int i=0;i<=N-1;i++)
	{
		printf("%d",A[i]);
		printf(",");
	}
	printf("\n");
	bubble_sort(A,N);
	printf("Data after bubble sort are: \n");
	for(int i=0;i<=N-1;i++)
	{
		printf("%d,",A[i]);
	}
	printf("\n");
	return 0;
}

int bubble_sort(int A[],int N)
{
	int temp,pass;
	for(pass=1;pass<=N-1;pass++)
	{
		for(int iteration=0;iteration<=N-1-pass;iteration++)
		{
			if(A[iteration]>A[iteration+1])
			{
				temp = A[iteration];
				A[iteration] = A[iteration+1];
				A[iteration+1] = temp;
			}
		}
	}
	return 0;
}

