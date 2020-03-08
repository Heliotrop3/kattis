# Tyler Huffman
# 2020-03-07
# https://open.kattis.com/problems/autori

# Given a hyphen seperated name, Doug-Ivan-Gerald, return the first letters: DIG
print("".join([x[0] for x in str(input()).split("-")]))