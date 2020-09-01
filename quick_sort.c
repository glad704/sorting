#include<stdio.h>
void quick_sort(int [],int);
void quick(int [],int,int,int,int*);
int main()
{
	int N=9;
	int A[] = {22,11,99,44,77,33,66,55,88};
	printf("Data before quick sort are: \n");
	for(int i=0;i<N;i++)
	{
		printf("%d,",A[i]);
	}
	printf("\n");
	quick_sort(A,N);
	printf("Data after quick sort are: \n");
	for(int i=0;i<N;i++)
	{
		printf("%d,",A[i]);
	}
	printf("\n");
	return 0;
}

void quick(int A[],int N,int BEG,int END,int *LOC)
{
	int LEFT,RIGHT,temp;
	LEFT=BEG;
	RIGHT=END;
	*LOC=BEG;
step2:
	while(A[*LOC]<=A[RIGHT]&&*LOC!=RIGHT)
	{
		RIGHT--;
	}
	if(*LOC==RIGHT)
	{
		return;
	}
	if(A[*LOC]>A[RIGHT])
	{
		temp=A[*LOC];
		A[*LOC]=A[RIGHT];
		A[RIGHT]=temp;
		*LOC=RIGHT;
	}
	goto step3;
step3:
	while(A[LEFT]<=A[*LOC]&&LEFT!=*LOC)
	{
		LEFT++;
	}
	if(*LOC==LEFT)
	{
		return;
	}
	if(A[LEFT]>A[*LOC])
	{
		temp=A[LEFT];
		A[LEFT]=A[*LOC];
		A[*LOC]=temp;
		*LOC=LEFT;
	}
	goto step2;
}
void quick_sort(int A[],int N)
{
	int TOP=-1,BEG,END,LOC;
	int LOWER[10],UPPER[10];
	if(N>1)
	{
		TOP++;
		LOWER[TOP]=0;
		UPPER[TOP]=N-1;
	}
	while(TOP!=-1)
	{
		BEG=LOWER[TOP];
		END=UPPER[TOP];
		TOP--;
		quick(A,N,BEG,END,&LOC);
		if(BEG<LOC-1)
		{
			TOP++;
			LOWER[TOP]=BEG;
			UPPER[TOP]=LOC-1;
		}
		if(LOC+1<END)
		{
			TOP++;
			LOWER[TOP]=LOC+1;
			UPPER[TOP]=END;
		}
	}
}
