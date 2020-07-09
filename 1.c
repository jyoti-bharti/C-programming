#include<stdio.h>
int main()
{
	int x,y,z;
	
	printf("enter three numbers for comparison:\n");

	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		if((x>z)&&(y<z))
		{
		printf("%d is maximum number\n",x);
		printf("%d is minimum number",y);
		}

		else
		{
		printf("%d is maximum number\n",z);
		printf("%d is minimum number",y);
		}

	

	}
	
	else
	{
	   if (y>z)	
	   {
	   printf("%d is maximum  number\n",y);
	   printf("%d is minimum number",x);

	   }

	   else
	  {
	    printf("%d is maximum number",z);
  	    printf("%d is minimum number\n",x);
	  }
	}   

return(0);
}	
