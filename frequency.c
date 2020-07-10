#include<stdio.h>
int main()
{
	
	int n,dn=0,count=0;

	printf("enter no of elements:");         //arrary
	scanf("%d",&n);
	int a[n];
	printf("\nenter elements:");

	
	int i, j, k, temp=0;
	for(i=0;i<n;i++)                       //initialization of arrary
	{
		scanf("%d",&a[i]);
	}


	int c[n];				// Initialize another array with zeros
	for(i=0; i<n; i++)
	{
		c[i] = 0;
	}


	printf("\nfrequency of an element in the array:\n");
	//main logic
	for(i=0;i<n;i++)
	{
		count=0;
		temp = 0;
		for(j=0;j<n;j++)
		{
			for(k=0; k<n; k++)
			{
				if(a[i] == c[k])                //number is not used previosly
					temp = 1;
			}
			if(a[i]==a[j] && temp == 0)             //checks the number of times the got repeated in the same array 
			{
				count++;
			}
		}

		printf("%d: %d\n",a[i],count);
	 	if(count>1)
		{
			c[i]=a[i];
		}

		
	}
	



}
