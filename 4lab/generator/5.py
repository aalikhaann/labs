n=int(input())
def swr(n):
    for i in range(n+1):
        yield (i-n)*(-1)
a=swr(n)
for i in a:
    print(i,end=' ')