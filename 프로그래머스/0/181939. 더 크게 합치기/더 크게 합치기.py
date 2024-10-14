def solution(a, b):
    answer = 0
    
    num1 = (str(a) + str(b))
    num2 = (str(b) + str(a))
    
    if(int(num1) > int(num2)):
        answer = int(num1)
    else:
        answer = int(num2)
    return answer