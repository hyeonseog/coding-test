a = []
sum = 0
for i in range(9):
    a.append(int(input()))
    sum += a[i]

a.sort()

fir = 0
sec = 0

for i in range(9):
    for j in range(9):
        if sum - a[i] - a[j] == 100:
            fir = i
            sec = j
            break


for i in range(9):
    if i != fir and i != sec:
        print(a[i])
        