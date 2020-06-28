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
    N, D = [int(s) for s in input().split(" ")]
    a = [int(s) for s in input().split(" ")]
    count = {}
    for i in a:
        if i in count.keys():
            count[i] += 1
        else:
            count[i] = 1
    cut = 10000
    for i in count.keys():
        slices = count[i]
        if slices == D:
            cut = 0
            break
        mult = 2
        cut_local = 0
        flag = True
        while slices < D and mult <= D - slices and mult * i < 3.6e11:
            if mult * i in count.keys():
                j = 0
                while j < count[mult * i] and flag:
                    k = 0
                    while k < mult - 1 and flag:
                        cut_local += 1
                        slices += 1
                        if slices == D:
                            cut = min(cut, cut_local)
                            flag = False
                            break
                        k+=1
                    slices += 1
                    if slices == D:
                        cut = min(cut, cut_local)
                        flag = False
                        break
                    j+=1
            mult += 1
        if flag:
            cut = min(cut, cut_local + D - slices)
    print("Case #{}: {}".format(t, cut))
