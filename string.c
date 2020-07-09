#include<stdio.h>
int main()
{
	int n;
	int sum=0,avg=0;
	printf("enter total numbers:");
	scanf("%d",&n);
	int a[n];

	printf("enter  numbers:");

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for (int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}

	avg=(sum/n);

	printf("\navg is:%d",avg);

}
