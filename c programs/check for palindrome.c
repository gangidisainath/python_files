/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

