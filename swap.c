#include<stdio.h>
void main()
{
	int x,y,tem;
	printf("enter two integers x & y:");
	scanf("%d%d",&x,&y);
	
	printf("before swapping:\n X=%d \t Y=%d",x,y);

	x=x+y;
	y=x-y;
	x=x-y;

	printf("\n after swapping:\n X=%d \t Y=%d",x,y);

}
