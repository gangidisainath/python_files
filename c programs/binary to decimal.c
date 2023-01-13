
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
