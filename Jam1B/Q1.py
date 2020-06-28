######## Choice in string ########
# candidat = "abcdefghijklmnopqrstuvwxyz"

########## Direction x&y ##########
# dirx = [-1, 1, 0, 0]
# diry = [0, 0, -1, 1]

########### Combinaison ###########
#from scipy.special import comb, perm
#print(int(comb(5, 2)))

T = int(input()) # Read the number of cases

for t in range(1, T + 1):
    n, m = [int(s) for s in input().split(" ")]
    print("Case #{}: {} {}".format(t, n + m, n * m))
