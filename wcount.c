#include<stdio.h>
int main()
{
	int c;
	printf("enter text:");


	while((c=getchar())!='.')
	{		
		if (c==' ')
		{
			printf("\n");
		}

		else
		{
			putchar(c);
		}

	}

}
