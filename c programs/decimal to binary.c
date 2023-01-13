/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{int x=0,num,res,temp,sum=0, t;
 printf("num");
 scanf("%d",&num);
 while(num!=0)
 {t=num%2;
 sum=sum+pow(10,x)*t;
 num=num/2;
x++;}
    printf("%d",sum);

    return 0;
}
