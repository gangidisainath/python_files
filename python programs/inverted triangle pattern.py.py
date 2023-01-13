'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
a = int(input())
for i in range(0,a):
    for j in range(0,(2*a)-1):
       if ((j>=i)&(j<((2*a)-1)-i)):
           print("*",end="")
    print("")      