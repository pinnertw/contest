##### bit #####
x = '1000'
print("int('1000', 2) = {}".format(int(x, 2)))
# -> print 8

print("8 << 2 = {}".format(8<<2))
# -> print 32

## << left shift
## >> right shift
## & and
## | or
## ~ -x - 1
## ^ xor

##### char #####
for i in range(33, 127):
    print(i, '\t', chr(i), end="\t")
# ord('a') -> 97
# ord('A') -> 65
