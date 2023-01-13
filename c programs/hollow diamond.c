
#include <stdio.h>

int main()
{
	int a,i,j,b;
	scanf("%d", &a);
	b=2*a;
	for(i=0;i<a;i++)
	{
	    for(j=0;j<a-i;j++)
	    {
	        printf("*");
	    }
	    for(j=a+i;j<b;j++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}

	for(i=0;i<a;i++)
	{
	    for(j=0;j<=i;j++)
    	{
	        printf("*");
    	}
    	for(j=b-1;j>=b-i-1;j--)
    	{
    	    printf("*");
    	}
    	printf("\n");
	}	

	return 0;
}
