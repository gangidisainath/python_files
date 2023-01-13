/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{  int a[10],*b,i,n,sum=0;
b=a;
printf ("enter  the number of elements in the array") ;
 scanf("%d", &n) ;
 printf( "enter  %d array elements",n);
for(i=0;i<n;i++)
scanf("%d",b+i ) ;
for(i=0;i<n;i++) 
sum=sum+*(b+i) ;
printf("%d", sum);
    return 0;
}
