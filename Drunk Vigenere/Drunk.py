"""
Tyler Huffman
2020-08-23
https://open.kattis.com/problems/drunkvigenere
"""
alph = ["A","B","C","D","E","F","G","H","I","J",
        "K","L","M","N","O","P","Q","R","S","T",
        "U","V","W","X","Y","Z"]
idx = 0
res = []
encrypted = input()
key = input()

for i in range(len(key)):
    shift = alph.index(key[i])
    to_shift = alph.index(encrypted[i])
    if i % 2 == 0:
        res.append(alph[(to_shift - shift)% len(alph)])
    else:
        res.append(alph[(to_shift + shift) % len(alph)])
        
print("".join(res))