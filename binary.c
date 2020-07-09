#include<stdio.h>
void main()
{
	int n;
	
	printf("enter number of elements of the array:");
	scanf("%d",&n);

	int a[n],tem;

	printf("enter the elements of the arrary:");
	for(int i=0;i<n;i++)
	{	
	      scanf("%d",&a[i]);
	 }

	//main bubble short
	
	for(int j=0;j<n-1;j++)
	{
		for(int k=0;k<(n-1-j);k++)
		{
			if(a[k]>a[k+1])
			{
				tem=a[k];
				a[k]=a[k+1];
				a[k+1]=tem;
			}
		}
	}


	printf("\nsorted list in ascending order");
	for (int b=0;b<n;b++)
	{
		printf("%d ",a[b]);
	}
	
}

