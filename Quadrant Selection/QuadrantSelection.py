# Tyler Huffman
# 2020-03-04
# https://open.kattis.com/problems/quadrant

from sys import stdin
# Grab the (x,y) values
x,y = (int(z) for z in stdin.readlines())

# Use basic algebra to determine which quadrant an (x,y) coords are in
if x > 0:
    if y > 0:
        print(1)
    else:
        print(4)
else:
    if y > 0:
        print(2)
    else:
        print(3)