#include<stdio.h>
#include<stdlib.h>
main()
{
	int a;
	test:
		{
		printf("\n%d",a);
		a++;	
		}
		if(a<=20)
		goto test;
	
}
