n=int(input())

def swr(n):
    for i in range(1,n+1):
        if(i%3==0 and i%4==0):
            yield i
a=swr(n)

for i in a:
    print(i, end=' ')