#include<stdio.h>
int main()
{
	int  m,n,i,j;
	printf("enter order of array:");
	scanf("%d%d",&m,&n);
	
	int a[m][n];				//1st array
	printf("\nenter elements of array 1:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}

	}


	int b[m][n];				//2nd array	
	printf("enter elements of array 2:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			scanf("%d",&b[i][j]);
		}

	}

	int sum[m][n];					//addition of two array
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			sum[i][j]=a[i][j]+b[i][j];
		}
	}

	printf("\n sum of arrary:\n");			//display 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %3d ",sum[i][j]);
		}

	
	printf("\n");
	}
}
