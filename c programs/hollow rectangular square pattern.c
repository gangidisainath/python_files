
#include <stdio.h>

int main()
{
	int a,b,i,j;
	scanf("%d%d", &a,&b);
	for (i=1;i<=a;i++)
	{
     
	    for (j=1;j<=b;j++)
	    { if ((i==1)||(i==a)||(j==1)||(j==b))
	    printf("*");
	}
	    printf("\n");
	}
	return 0;
}
