#include <stdio.h>

int main()
{
	int a,r=0,d,c;
	scanf("%d", &a);
	c=a;
	while(a>0)
	{ d=a%10;
	r=((r*10)+d);
	a=a/10;}
	if (r==c)
     printf("Palindrome");
	else 
	printf("Not Palindrome");
	return 0;
}

