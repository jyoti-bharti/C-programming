#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,num;

	printf("enter no. of elements in the array:");
	scanf("%d",&n);

	int a[n];

	printf("enter the elements of the array:");
	 for(int i=0;i<n;i++)
	 {
		 scanf("%d",&a[i]);
	 }

	 printf("enter the number to be  searched:");
	 scanf("%d",&num);

	 for (int j=0;j<n;j++)
	 {
		 if(a[j]==num)
		 {
			 printf("%d is present in %d position",num,(j+1));
			 exit(0);
		
		 }

		
	 }

	 printf("%d is not present in array:",num);

}
