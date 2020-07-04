######## Choice in string ########
# candidat = "abcdefghijklmnopqrstuvwxyz"

########## Direction x&y ##########
# dirx = [-1, 1, 0, 0]
# diry = [0, 0, -1, 1]

########### Combinaison ###########
#from scipy.special import comb, perm
#print(int(comb(5, 2)))
from copy import deepcopy

T = int(input()) # Read the number of cases

for t in range(1, T + 1):
    u = int(input())
    use = []
    ans = [" "] * 10
    index = 1
    queries = []
    for i in range(10000):
        n, m = [s for s in input().split(" ")]
        if len(n) == len(m):
            if int(n[0]) == index and m[0] not in ans:
                ans[index] = m[0]
                index += 1
        for j in m:
            if len(use) < 10 and j not in use:
                use.append(j)
        queries.append([n, m])

    while index < 9:
        query = []
        for n, m in queries:
            n_loc = n
            while ans[int(n[0])] != " ":
                if len(n) > 0:
                    n_loc = n[1:]
                else:
                    n_loc = None
            if len(n) == len(m):
                if int(n[0]) == index and m[0] not in ans:
                    ans[index] = n[0]
                    index += 1
            if n_loc is not None:
                query.append([n_loc, m])
        queries = deepcopy(query)
    for i in range(len(use)):
        if use[i] not in ans:
            ans[0] = use[i]
    print("Case #{}: {}".format(t, "".join(ans)))
