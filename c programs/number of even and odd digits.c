'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
#include <stdio.h>

int main()
{
        int a,b,o,e=0;
        scanf("%d",&a);
        while(a%10!=0)
        { b=a%10;
        a=a/10;
           if (b%2==0)
          e=e+1;
          else o=o+1;
          }

        printf("Odd: %d Even: %d",o,e);
        return 0;
}
