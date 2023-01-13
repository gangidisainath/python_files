
a =int(input())
c=int(input())
for i in range(a):
 b=c
 for j in range(c):
   if(j<=i):
    print(b,end="")
    b-=1
   else:
    print(a,end="")
 a-=1
 print("")
