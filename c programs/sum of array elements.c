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
