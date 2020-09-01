#include<stdio.h>
int min(int [],int,int);
int main()
{
	int loc,temp,N=9;
	int A[] = {99,33,77,22,1,66,44,11,88};
	printf("Data before selection sort are: \n");
	for(int k=0;k<=N-1;k++)
	{
		printf("%d,",A[k]);
	}
	printf("\n");
	for(int k=0;k<=N-1;k++)
	{
		loc = min(A,k,N);
		temp = A[k];
		A[k] = A[loc];
		A[loc] = temp;
	}
	printf("Data after selection sort are: \n");
	for(int k=0;k<=N-1;k++)
	{
		printf("%d,",A[k]);
	}
	printf("\n");
	return 0;
}

int min(int A[],int k,int N)
{
	int loc,store;
	store = A[k];
	loc = k;
	for(int j=k+1;j<=N-1;j++)
	{
		if(store>A[j])
		{
			store = A[j];
			loc = j;
		}
	}
	return loc;
}


