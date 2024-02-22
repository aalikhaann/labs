import re

word=input()
print(re.findall("[A-Z][^A-Z]*",word))