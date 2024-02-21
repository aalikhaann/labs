n=int(input())

def swr(n):
    for i in range(1, n+1):
        yield i**2

a = swr(n)
for i in a:
    print(i, end=' ')
