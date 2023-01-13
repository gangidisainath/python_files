#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d", &a,&b);
	if ((a%b==0)||(b%a==0))
	{if (a>b)
	printf("%d",a);
	else printf("%d",b);}
	else 
	{c=a*b;
	printf("%d",c);}
	return 0;
}
