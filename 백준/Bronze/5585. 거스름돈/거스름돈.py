a = int(input()) 
num = 0  # 동전 개수

N = 1000 - a  

coin = [500, 100, 50, 10, 5, 1] 

for i in coin:
    if i <= N:
        num += N // i  
        N = N % i  
        if N == 0: 
            break

print(num)
