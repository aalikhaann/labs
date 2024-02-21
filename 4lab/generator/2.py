n=int(input())

def even(n):
    for i in range(0,n+1,2):
        yield i
        
a=even(n)
for i in a:
    print(i, end=' ')