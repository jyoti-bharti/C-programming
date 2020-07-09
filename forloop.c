#include<stdio.h>
int main()
{
 int n;

   printf("enter no of elements in array:\n");
   scanf("%d",&n);

   int a[n];

  printf("enter elements in the arrary:\n");
  for(int i=0;i<n;i++)
  {
	scanf("%d",&a[i]);
  }


   printf(" elements in the arrary:\n");
  for(int j=0;j<n;j++)
  {
        printf("%d",a[j]);
  }

} 

