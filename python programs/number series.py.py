'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
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