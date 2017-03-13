#!/usr/bin/python
# -*- coding: utf-8 -*-

print('~~ Ceasar cipher ~~')

alphaEng = ' 0123456789abcdefghijklmnopqrstuvwxyz'
alphaRus = ' 0123456789абвгдеёжзийклмнопрстуфхцчшщьыъэюя'

print('Please, enter the key')
n = int(input())

print('Please, enter the language (rus or eng)')
lang = input().strip()

print('Please, enter the text')
s = input().strip()

alpha = ''
if lang == 'rus':
    alpha = alphaRus
elif lang == 'eng':
    alpha = alphaEng

print("Do you need encryption('e') or decryption('d')? Please, enter first letter")
function = input().strip()
res = ''
for c in s:
    if function == 'e':
        res += alpha[(alpha.index(c) + n) % len(alpha)]
    else:
        res += alpha[(alpha.index(c) - n) % len(alpha)]

print('Result: "' + res + '"')

