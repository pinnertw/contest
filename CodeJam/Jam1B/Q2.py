######## Choice in string ########
# candidat = "abcdefghijklmnopqrstuvwxyz"

########## Direction x&y ##########
# dirx = [-1, 1, 0, 0]
# diry = [0, 0, -1, 1]

########### Combinaison ###########
#from scipy.special import comb, perm
#print(int(comb(5, 2)))

T, A, B = [int(s) for s in input().split(" ")]# Read the number of cases

for t in range(1, T + 1):
    flag = True
    i = 0
    j = 0
    while flag:
        print(i-5, " ", j-5, flush=True)
        k = input()
        if k == "CENTER":
            flag = False
        elif k == "WRONG":
            flag = False
        i = (i + 1) % 11
        if i == 0:
            j = (j + 1) % 11
        if i == 0 and j == 0:
            flag = False
    
