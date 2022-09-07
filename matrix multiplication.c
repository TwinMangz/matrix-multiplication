#include<stdio.h>
int main()
{
	int i,j,l;
	int m,n,k;
		
	printf("This program is for finding the multiplication of two matrices\n\n");
	
	printf("enter the value of m n k \n");
	scanf("%d%d%d",&m,&n,&k);
	
	printf("\n enter the values of second matrix\n\n");
	
											int A[m][n];
											
												printf("\n\n");	
											for(i=0;i<m;i++)
											{
												for(j=0;j<n;j++)
												{
													scanf("%d",&A[i][j]);
												}
												printf("\n");
											}
										
											
												printf("\n\n");	
												
											for(i=0;i<m;i++)
											{
												for(j=0;j<n;j++)
												{
													printf(" %d ",A[i][j]);
												}
												printf("\n");
											}
															
											
		int B[n][k];
	
		printf("\n enter the values of second matrix\n\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%d",&B[i][j]);
		}
		printf("\n");
	}

		printf("\n\n");	
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf(" %d ",B[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nhere is the output of the two matrices multiplication\n\n");
	
	int C[m][k];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<k;j++)
		{
			C[i][j]=0;
			for(l=0;l<m;l++)
			{	
				C[i][j] += A[i][l]*B[l][j];
			}
		}
	}
	printf("below is the result\n\n");
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf(" %d ",C[i][j]);
		}
		printf("\n");
	}
	
	
}
