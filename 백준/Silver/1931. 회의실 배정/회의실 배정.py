import sys

n = int(input())

end: int = 0
answer: int = 0

arr = []

for i in range(0,n):
    a, b = map(int,sys.stdin.readline().rstrip().split())
    arr.append([a,b])

arr.sort(key=lambda x: (x[1], x[0]))

for Start, End in arr:
    if end <= Start:
        answer += 1
        end = End
print(answer)