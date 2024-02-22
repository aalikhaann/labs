import re

word=input()
res=re.sub(r'([a-z])([A-Z])', r'\1 \2', word)
print(res)