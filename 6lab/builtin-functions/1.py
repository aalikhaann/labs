import math
def prod(numbers):
    return math.prod(numbers)
a=[]
n=int(input())
for i in range(0,n):
    b=int(input())
    a.append(b)
print(prod(a))