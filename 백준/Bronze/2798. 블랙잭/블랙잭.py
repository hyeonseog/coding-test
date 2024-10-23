N, M = map(int, input().split())
A = list(map(int, input().split()))

max = 0

for i in range(N):
    for j in range(N):
        for k in range(N):
            if i != j and j != k and i != k:
                if A[i] + A[j] + A[k] <= M and A[i] + A[j] + A[k] > max:
                    max = A[i] + A[j] + A[k]



print(max)