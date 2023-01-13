#include <stdio.h>

int main()
{
        int a,i,b=0;
        scanf("%d", &a);
        for (i=1;i<=a;i++)
        {
            if (a%i==0)
            b=b+1;
            
        }
           printf("%d", b);
        return 0;
}
