# Tyler Huffman
# 2020-03-07
# https://open.kattis.com/problems/reversebinary

# Grab the input in binary, reverse the binary number, convert to integer value from base 2
print(int(format(int(input()),'b')[-1::-1],2))