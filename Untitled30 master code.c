#include<stdio.h>
main()
{
	int a[5];
	int i;
	int n;
	printf("\nenter the number of elements:");
	scanf("%d",&n);
	printf(" \nenter the elements\n ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
			
	}
	
	printf("show the elements\n");
	for (i=0;i<n ;i++)
	{
		printf("%d\n",a[i]);
	}
}
