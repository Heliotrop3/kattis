# Tyler Huffman
# 2020-03-09
# https://open.kattis.com/problems/eatingout

z = [int(x) for x in input().split()]
print("possible" if(2*z[0] >= sum(z[1:])) else "impossible")