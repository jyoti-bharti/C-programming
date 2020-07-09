#include<stdio.h>
int main()
{
	int c,nc=0;
	
	printf("enter character:");
	while((c=getchar())!='\n')
	{
//		putchar(c);
		++nc;
		printf("\nno. of characters:%d",nc);
	}

}
