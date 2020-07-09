#include<stdio.h>
int main()
{

	char x;

	printf("enter a character:");
	scanf("%c",&x);

	if (x=='a'|| x=='e'|| x=='i'|| x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	{
		printf("\n the character is a vowel\n");
	}
	
	else
	{
		printf("the character is a consonant");
	}

}

