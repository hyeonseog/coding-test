N = int(input())
a = 0
b = 0

for i in range(N):
    m, M = map(int, input().split())
    print(sum(str(i).count("0") for i in range(m,M+1)))


