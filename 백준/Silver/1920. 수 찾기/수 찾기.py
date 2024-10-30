N = int(input())
arr = list(map(int, input().split()))
M = int(input())
target = list(map(int, input().split()))

arr.sort()

for i in target:
    start, end = 0, N - 1
    found = False

    while start <= end:
        mid = (start + end) // 2
        if arr[mid] == i:
            print(1)
            found = True
            break
        elif arr[mid] < i:
            start = mid + 1
        else:
            end = mid - 1

    if found == False:
        print(0)