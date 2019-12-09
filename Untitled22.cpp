#include<stdio.h>
main()
{
	     int n,r,sum=0,temp;
	     printf("\n enter value :");
	     scanf("%d",&n);
	     temp=n;
	     while(n>0)
	     {
	     	r=n%10;
		    sum=(sum*10)+r;
		    n=n/10;
        }
    printf("\n  sum of digits : %d",count);   	
}
