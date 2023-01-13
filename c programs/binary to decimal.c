/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{int  bin,t, temp,res, x=0,sum=0;
printf("enter a binary numb\n");
scanf("%d",&bin);

while( bin!=0)
  {t=bin%10; 
    res=pow(2,x)*t;
     sum=sum+res;
      bin=bin/10;
       x++;}
    printf(" %d",sum);

    return 0;
}
