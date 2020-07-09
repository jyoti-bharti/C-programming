#include<stdio.h>
int main()
{
	
	int n;
	printf("enter no of elements:");
	scanf("%d",&n);



	int a[n];
	printf("\nenter elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	
	printf("\nelements in reverse order:");
	for(int j=(n-1);j>=0;j--)
	{
		printf(" %d ",a[j]);
	}


}
