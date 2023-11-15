#include<stdio.h>
#include<string.h>
main()
{
	char str[20]="i am a student";
	int i;
	i=strlen(str);
	printf("%d\n",i);
	printf("\n%s",strlwr(str));
	printf("\n%S",strupr(str));
	printf("\n%s",strrev(str));
}
