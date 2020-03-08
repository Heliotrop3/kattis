# Darren Good, Tyler Huffman
# 2020-03-04
# https://open.kattis.com/problems/tarifa

from sys import stdin
'''
 Grab the first two inputs and find out how much data the customer is supposed to have then grab all remaining inputs,
 find their sum, and subtract the amount of data used from the customer's total data avaliable to determine how much
 data the customer has for next month
'''
print(int(input()) * (int(input()) + 1) - sum([int(x) for x in stdin.read().strip().split()]))