#include<stdio.h>

int main()
{
int c, nl = 0;
while((c = getchar()) != EOF)
{
	if (c == '\n')
		nl++;
	printf("\n Number of Lines = %d", nl);
}
}
