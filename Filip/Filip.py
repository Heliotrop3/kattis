# Tyler Huffman
# 2020-03-05
# https://open.kattis.com/problems/filip

# Grab the integer input
z = input().split()
# Reverse the numbers, convert them to ints, and print the bigger value
print(max(int(z[0][-1::-1]),int(z[-1][-1::-1])))
