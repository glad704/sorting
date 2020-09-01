#include<stdio.h>
void counting_sort(int [],int,int [],int);
int main()
{
	int A[]={5,9,4,5,3,6,8,5,4,8,7,4,6,9,7};
	int B[15];
	int K=10;
	int N=15;
	printf("Data before counting sort are: \n");
	for(int i=0;i<15;i++)
	{
		printf("%d,",A[i]);
	}
	printf("\n");
	counting_sort(A,N,B,K);
	printf("Data after counting sort are: \n");
	for(int i=0;i<15;i++)
	{
		printf("%d,",B[i]);
	}
	printf("\n");
	return 0;
}

void counting_sort(int A[],int N,int B[],int K)
{
	int i,j,C[K];
	for(i=0;i<K;i++)
	{
		C[i]=0;
	}
	for(j=0;j<N;j++)
	{
		C[A[j]]=C[A[j]]+1;
	}
	for(i=1;i<K;i++)
	{
		C[i]=C[i]+C[i-1];
	}
	for(j=N-1;j>=0;j--)
	{
		B[C[A[j]]-1]=A[j];
		C[A[j]]=C[A[j]]-1;
	}
}
