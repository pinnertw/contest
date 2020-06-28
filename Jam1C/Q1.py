######## Choice in string ########
# candidat = "abcdefghijklmnopqrstuvwxyz"
from functools import lru_cache
########## Direction x&y ##########
dirx = [-1, 1, 0, 0]
diry = [0, 0, -1, 1]
dir = "WESN"

########### Combinaison ###########
#from scipy.special import comb, perm
#print(int(comb(5, 2)))

maxint=int(1e5)

def move(X, Y, sym):
    return X + dirx[dir.index(sym)], Y + diry[dir.index(sym)]

@lru_cache(10000000)
def f(x, y, t):
    if t >= len(route):
        return maxint
    X, Y = route[t]
    if x == X and y == Y:
        return t
    else:
        fx = min(min(min(f(x, y, t+1), f(x+1, y, t+1)), min(f(x, y+1, t+1), f(x-1, y, t+1))), f(x, y-1, t+1))
        return fx

T = int(input()) # Read the number of cases

for t in range(1, T + 1):
    X, Y, path = input().split(' ')
    X = int(X)
    Y = int(Y)
    temp = 0
    ans = maxint
    for sym in path:
        X, Y = move(X, Y, sym)
        temp += 1
        if (abs(X) + abs(Y)) <=temp:
            ans = temp
            break
    if ans == maxint:
        ans = "IMPOSSIBLE"
    print("Case #{}: {}".format(t, ans))
