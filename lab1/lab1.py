#python syntax

print("Hello world")

if 5>2:
    print("YES")

#python comments

# this is a comment

"""
this is a comment
written in
more than just one line
"""

#python variables

carname="Volvo"

x=50

x=5
y=10
print(x+y)

x=5
y=10
z=x+y
print(z)

x,y,z="Orange","Banana","Cherry"

x=y=z="Orange"

def myfunc():
    global x
    x="fantastic"

#python data types

x=5
print(type(x))

x="Hello world"
print(type(x))

x=20.5
print(type(x))

x=["apple","banana","cherry"]
print(type(x))

x=("apple","banana","cherry")
print(type(x))

x={"name":"John","age":36}
print(type(x))

x=True
print(type(x))

#python numbers

x=5
x=float(x)

x=5.5
x=int(x)

x=5
x=complex(x)

#python strings

x="Hello world"
print(len(x))

txt="Hello world"
print(txt[0])

txt="Hellow world"
x=txt[2:5]

txt="Hello world"
x=txt.strip()

txt="Hello world"
txt=txt.upper()

txt="Hello world"
txt=txt.lower()

txt="Hello world"
txt=txt.replace("H","J")

age=36
txt="My name is John and I am {}"
print(txt.format(age))