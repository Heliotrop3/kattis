# Tyler Huffman
# 2020-03-07
# https://open.kattis.com/problems/abc

# Map the values to their letter (A < B < C)
f = {letter:number for (number,letter) in zip(sorted(int(x) for x in input().split()),["A","B","C"])}
# Print out according to the mapping
print(" ".join(str(f[char]) for char in str(input())))