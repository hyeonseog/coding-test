import sys

N = int(sys.stdin.readline().strip())
N_s = sorted(list(map(int, sys.stdin.readline().strip().split())))
M = int(sys.stdin.readline().strip())
M_s = list(map(int, sys.stdin.readline().strip().split()))

n_dic = {}
for n in N_s:
    if n in n_dic:
        n_dic[n] += 1
    else:
        n_dic[n] = 1

def binary(m, N_s, start, end):
    if start > end:
        return 0
    mid = (start + end)//2
    if m == N_s[mid]:
        return n_dic[m]
    elif m < N_s[mid]:
        return binary(m, N_s, start, mid-1)
    else:
        return binary(m, N_s, mid+1, end)



for m in M_s:
    print(binary(m, N_s, 0, len(N_s)-1), end=' ')