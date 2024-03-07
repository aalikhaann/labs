def palindrome(string):
    if(string==string[::-1]):
        return "palindrome"
    else:
        return "not palindrome"
a=str(input())
print(palindrome(a))