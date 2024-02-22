import re

'''filename="C:\Users\mynba\Documents\pp2_2024\5lab\regex\row.txt"'''

with open("row.txt", "r", encoding='utf-8') as file:
    content = file.readlines()

print(re.findall("ab*",content))