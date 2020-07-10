#include<stdio.h>
int main()
{
	
	int n,ele,dn=0,count=0;

	printf("enter no of elements:");         //arrary
	scanf("%d",&n);
	int a[n];
	printf("\nenter elements:");

	
	int i, j, k, temp=0;
	for(i=0;i<n;i++)                       //initialization of arrary
	{
		scanf("%d",&a[i]);
	}

	// Initialize another array with zeros
	int c[n];
	for(i=0; i<n; i++)
	{
		c[i] = 0;
	}

	printf("\nunique numbers in the array:\n");
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
		if(count==1)
		{
			printf("%d\t ",a[i]);
		}

		else if(count>1)                                       //if the number is present in array more than 1 time
		{
			dn++;                       //number of duplicates present in array
			c[i] = a[i];                //stores the number in another array if it has duolicates
		}

		else
		{}

	}
	



}
