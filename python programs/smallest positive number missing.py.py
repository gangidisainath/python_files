
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
