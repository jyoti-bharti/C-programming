#include<stdio.h>
int main()
{
	int count=0,x;

	printf("enter a number:");
	scanf("%d",&x);


	for(int i=1;i<=10;i++)
	{
		if(x==1 ||x==0)
		{
			 count=5;
		}

		
		else if((x%i)==0)
		{
			++count;
		}

	}


	if(count<=2)
	{
		printf("\nprime number");
	}

	else
	{
		printf("\nnot a prime number");
	}

}
