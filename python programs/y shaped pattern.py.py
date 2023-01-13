'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
a =int(input())
b=int(a/2)
for i in range(b,0,-1):
 for j in range(b):
  print(" ",end="")
 for k in range(2*i+1):
  if (k==0)or(k==2*i):
   print("*",end="")
 print(" ")
for i in range(b):
 for j in range(b):
  print(" ",end="")
 for k in range(1):
  print("*")
 