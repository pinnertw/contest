def find(i):
    if parents[i] == i:
        return i
    else:
        parents[i] = find(parents[i])
        return parents[i]

def union(i, j):
    I = find(i)
    J = find(j)
    if I == J:
        return
    if ranks[I] < ranks[J]:
        parents[I] = J
    elif ranks[I] > ranks[J]:
        parents[J] = I
    else:
        parents[J] = I
        ranks[I] += 1

def same(i, j):
    return find(i) == find(j)

n = 10
parents = [i for i in range(n)]
ranks = [0 for i in range(n)]
