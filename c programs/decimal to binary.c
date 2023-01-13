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
