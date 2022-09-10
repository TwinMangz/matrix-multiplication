#include<stdio.h>
int main()
{
	int m,n,o;
	int i,j,l,k;
	
	printf("this programming is for solving matrix multiplication\n\n");
	
	printf("enter the value of m,n,k:\n");
	scanf("%d%d%d",&m,&n,&o);
	
	int A[m][n],B[n][o];
	int C[m][o];
	
	printf("m=%d n=%d k=%d\n",m,n,o);
	
	printf("\t Enter the value of A matrix:\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",A[i][j]);		
		}
		printf("\n");
	}
	
	printf("\n\t Enter the value of A matrix:\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<o;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<o;j++)
		{
			printf(" %d ",B[i][j]);		
		}
		printf("\n");
	}
	
	// upto here no error as well as input of the two matrix done 
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<o;j++)
		{
			C[i][j]=0;
			for(k=0;k<n;k++)
			{
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	
	printf("here is the output of matrix:\n\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<o;j++)
		{
			printf(" %d ",C[i][j]);
			
		}
		printf("\n");
	}
	
	
	
	
}
