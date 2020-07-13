#include<stdio.h>
int main()
{
	// find 2nd maximum
	int n,i,k=0;
	printf("enter no. of elements:");
	scanf("%d",&n);

	int a[n];
	printf("\nenter elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	int max[n];
	for(i=0;i<n;i++)
	{
		max[i]=0;
	}


	max[0]=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max[k])
		{
			++k;
			max[k]=a[i];
		}
	}
	printf("\nmax. element:%d",max[k]);
	printf("\n2nd max. element:%d",max[k-1]);
}
