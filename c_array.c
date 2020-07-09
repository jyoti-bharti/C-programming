#include<stdio.h>
int main()
{
	
	int n;
	printf("enter no of elements:");
	scanf("%d",&n);



	int a[n],b[n];
	printf("\nenter elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}

	
	printf("\nelements of copied array:");
	for(int j=0;j<n;j++)
	{
		printf(" %d ",b[j]);
	}


}
