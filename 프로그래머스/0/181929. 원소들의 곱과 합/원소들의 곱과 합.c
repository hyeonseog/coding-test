#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t len) {
    int answer = 0;
    int plus = 0;
    int m = 1;
    for(int i = 0; i < len; i++) {
        plus += num_list[i];
        m *= num_list[i];
    }
    if((plus * plus) > m) {
        answer = 1;
    }
    return answer;
}