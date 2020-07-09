#include<stdio.h>

int main()
{
	int x, y, z, max=0, min=0;
	scanf("%d%d%d", &x, &y, &z);
	
	if(x >= y && x >= z)
	{
		max = x;
		if(y <= z)
		{
			min = y;
		}

		else
		{
			min=z;
		}	
	}

	else if(y >= z && y >= x)
	{
		max = y;
		if(x<=z)
		{
			min=x;
		}
		
		else
		{
			min=z;
		}	
	}

	else if(z >= x && z >= y)
	{
		max = z;
		if(x<=y)
		{
			min=x;
		}
		
		else
		{
			min=y;
		}	

	}

	printf("Max = %d \t", max);
	printf("min=%d", min);
}
