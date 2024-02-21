import math
a=int(input())
b=int(input())
apothem=b/(2*math.tan(math.pi/a))
area=int((a*b*apothem)/2)
print(area)