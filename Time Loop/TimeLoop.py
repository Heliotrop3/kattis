# Tyler Huffman
# 2020-03-05
# https://open.kattis.com/problems/timeloop

# Given a number n, print out Abracadbra n times prefaced by a counter starting at 1 and ending at n+1 
print("\n".join("{} Abracadabra".format(x+1) for x in range(int(input()))))