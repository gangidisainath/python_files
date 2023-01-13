'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
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