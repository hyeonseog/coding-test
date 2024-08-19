#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
 
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int len = strlen(str1);
    int len2 = strlen(str2);
    for(int i = 0; i <= len;i++)
    {
        int x;
        for(x = 0; x < len2; x++)
        {
            if(str1[i+x] != str2[x])
                break;
        }
        if(x == len2)
            return 1;
    }
    return 2;
}