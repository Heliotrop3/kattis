# Tyler Huffman
# 2020-03-04
# https://open.kattis.com/problems/r2

from sys import stdin
# Grab the input
r,s = input().split()
# Solve for R2 by plugging variables into: 2*S-R1=R2
print(2*int(s) - int(r))