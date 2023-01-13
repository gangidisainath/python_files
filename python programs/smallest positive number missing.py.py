'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
a=int(input())
c=[]
b=list(map(int,input().split()))
for d in b:
  if(d>0):
    c.append(d)
c.sort()
for i in range(len(c)-1):
  if(c[i]+1!=c[i+1]):
   print(c[i]+1)
   break