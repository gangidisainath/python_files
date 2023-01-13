/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {
int i,n,f1=0,f2=1,f3;

printf("enter  the limit up to where the fibinonc in um ber mu s tbe genr  a y s");
scanf ("%d", &n);
printf("%d\t%d\t",f1, f2);
while(( f1+f2)<n) 
 {f3= (f1+f2) ;
 printf("%d\t",f3);
 f1=f2;
 f2=f3;
 }
    return 0;
}
