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
