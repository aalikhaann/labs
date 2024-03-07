import time,math
def sqrt(number,milliseconds):
    time.sleep(milliseconds/1000)
    a=math.sqrt(number)
    return f"Square root of number {number} after {milliseconds} milliseconds is {a}"
number=int(input())
t=int(input())
print(sqrt(number,t))