#include<stdio.h>
int bubble_sort(int [],int);
int main()
{
	int A[] = {34,15,29,8};
	int N = 4;
	printf("Data before sorting are: \n");
	for(int i = 0;i<=N-1;i++)
	{
		printf("%d,",A[i]);
	}
	printf("\n");
	bubble_sort(A,N);
	printf("Data after bubble sorting are: \n");
	for(int i=0;i<=N-1;i++)
	{
		printf("%d,",A[i]);
	}
	printf("\n");
	return 0;
}

int bubble_sort(int A[],int N)
{
	int temp;
	int pass;
	for(pass=1;pass<=N-1;pass++)
	{
		int flag=0;
		printf("Round: %d\n",pass);
		for(int i=0;i<=N-1-pass;i++)
		{
			if(A[i]>=A[i+1])
			{
				flag++;
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
		if(flag==0)
		{
			return 0;
		}
	}
	return 0;
}
