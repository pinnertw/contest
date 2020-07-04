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
    R, S= [int(s) for s in input().split(" ")]
    ans = []
    while R > 1 and S > 1:
        for i in range(S - 1):
            ans.append([R * (S - 1) - i, R - 1])
        R -= 1
    print("Case #{}: {}".format(t, len(ans)))
    for i in ans:
        print(i[0], ' ', i[1])
