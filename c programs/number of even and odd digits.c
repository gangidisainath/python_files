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
