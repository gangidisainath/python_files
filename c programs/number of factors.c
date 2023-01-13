/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
        int a,i,b=0;
        scanf("%d", &a);
        for (i=1;i<=a;i++)
        {
            if (a%i==0)
            b=b+1;
            
        }
           printf("%d", b);
        return 0;
}
