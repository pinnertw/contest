import random
l = int(2e5)
n = l
k = l // 3 * 2
with open("test6", 'w') as f:
    f.write(str(n) + ' ' + str(k) + '\n')
    for i in range(n // 3 + 1):
        f.write(str(i + 1) + " 1 1\n")
    for i in range(n // 3 + 1):
        f.write(str(i + 1) + " 0 1\n")
    for i in range(n // 3):
        f.write(str(i + 1) + " 1 0\n")
