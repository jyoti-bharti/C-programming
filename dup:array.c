#include<stdio.h>
int main()
{
	
	int n,ele,dn=0,count=0;
	printf("enter no of elements:");
	scanf("%d",&n);
	int i, j, k, temp=0;

	int a[n];
	printf("\nenter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	// Initialize another array with zeros
	int c[n];
	for(i=0; i<n; i++)
	{
		c[i] = 0;
	}

	for(i=0;i<n;i++)
	{
		count=0;
		temp = 0;
		for(j=0;j<n;j++)
		{
			for(k=0; k<n; k++)
			{
				if(a[i] == c[k])
					temp = 1;
			}
			if(a[i]==a[j] && temp == 0)
			{
				count++;
			}
		}
		printf("%d:\t%d\n ",a[i],count);
		if(count>1)
		{
			dn++;
			c[i] = a[i];
		}

	}
	printf("\nduplicate elements:");
	printf(" %d ",dn);


}
