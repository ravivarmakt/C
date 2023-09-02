//write a programme to find factorial of a number using while lopp//
#include<stdio.h>
main()
{
	int num;
	printf("enter the value of number\n");
	scanf("%d",&num);
	int i=1;
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial is %d ",fact)
	
}
