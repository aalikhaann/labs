a=int(input())
b=int(input())
def swr(a,b):
    for i in range(a,b+1):
        yield i**2
c=swr(a,b)
for i in c:
    print(i,end=' ')
