
a=list(map(int,input().split()))
while(a[0]>a[1]):
    a[0]-=a[1]
print(a[0])
