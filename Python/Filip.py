# Tyler Huffman
# 2020-03-05
# https://open.kattis.com/problems/filip
from sys import stdin
z = input().split()
print(max(int(z[0][-1::-1]),int(z[-1][-1::-1])))
