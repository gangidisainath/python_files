'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
a=int(input())
b=list(map(int,input().split()))
for d in b:
  c=0
  for i in range(1,int(d)):
    if(d%i==0):
       c+=1
    else:
       c+=0
  if(c==1):
     print(d,end="")