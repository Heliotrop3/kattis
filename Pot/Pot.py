"""
Tyler Huffman
2020-08-23
https://open.kattis.com/problems/pot
"""
from sys import stdin

total = 0
for x in stdin.readlines():
    num = str(x).strip()
    if len(num) >= 2:
        base = int(num[:-1])
        exp = int(num[-1])
        total += base**exp

print(total)