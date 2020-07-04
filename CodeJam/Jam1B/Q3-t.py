def sep2(R, S, step):
    ans = []
    for s in range(S, 1, -2):
        if R == 2:
            ans.append([2 * step, (R * (s - 1) + 1 - 2) * step])
        for i in range(1, R - 1, 2):
            ans.append([2 * step, (R * (s - 1) + i - 2) * step])
        if R % 2 == 1:
            ans.append([1 * step, step * 2 * (R - 1)])
    return ans

def merg(R, step, merg_step):
    ans = []
    if R == 2:
        ans.append([2 * step, merg_step])
    for i in range(1, R - 1, 2):
        ans.append([2 * step, (R - i - 1) *step + (i - 1) * (step + merg_step) + merg_step])
    if R % 2 == 1:
        ans.append([step, (R - 1) * (step + merg_step)])
    return ans


T = int(input()) # Read the number of cases

for t in range(1, T + 1):
    R, S= [int(s) for s in input().split(" ")]
    ans = []
    r = R
    s = S
    step = 1
    steps_end = []
    while S > 1:
        if S % 2 == 1:
            steps_end.append(step)
            S -= 1
        ans += sep2(R, S, step)
        step *= 2
        S //= 2
    while len(steps_end) > 0:
        merg_step = steps_end.pop()
        ans += merg(R, step, merg_step)
        step += merg_step
    print("Case #{}: {}".format(t, len(ans)))
    for i in ans:
        print(i[0], ' ', i[1])
