
a = int(input())
for i in range(0,a):
    for j in range(0,(2*a)-1):
       if ((j>=i)&(j<((2*a)-1)-i)):
           print("*",end="")
    print("")      
