/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void  swap(int  *x,int  *y);
void swap(int  *x,  int  *y) 
{ int z;
z=*x;
*x=*y;
*y=z;
printf("after swaping are   %d, %d\n", *x, *y);}
int main()
{int a,b;
printf("enter   two  elements");
scanf("%d%d",&a ,&b);
printf("elements befre  swaping are %d, %d\n",a,b);
swap(&a,&b);
    return 0;
}

