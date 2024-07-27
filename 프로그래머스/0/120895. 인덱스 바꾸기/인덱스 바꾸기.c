#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int num1, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(my_string);
    char arr[2];

    arr[0] = my_string[num1];
    arr[1] = my_string[num2];
      
    answer = my_string;
    
    answer[num1] = arr[1];
    answer[num2] = arr[0];
    
    return answer;
}