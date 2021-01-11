# Problem: https://open.kattis.com/problems/textureanalysis
# Difficulty 2.8
# Solution: Check the length of the set of lengths when splitting the input
#           on the asterisk. If all asterisk are equally spaced, then all
#           elements between the asterisks should have the same length. Thus,
#           the set of the length of said elements should return 1 if the
#           asterisks are equally spaced.


import sys

for idx, line in enumerate(sys.stdin.readlines()):
    if line.strip() == 'END':
        break
    else:
        line = set([len(item) for item in line.strip().split("*")[1:-1]])

        if len(line) > 1:
            print(f"{idx+1} NOT EVEN")
        else:
            print(f"{idx+1} EVEN")
