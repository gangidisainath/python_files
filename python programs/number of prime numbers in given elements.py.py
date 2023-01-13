
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
