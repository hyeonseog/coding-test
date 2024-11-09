def solution(str1, str2):
    answer = ''
    a = list(str1)
    b = list(str2)
    c = []
    for i in range(0, len(a)):
        c.append(a[i])
        c.append(b[i])
        answer = ''.join(c)
    return answer