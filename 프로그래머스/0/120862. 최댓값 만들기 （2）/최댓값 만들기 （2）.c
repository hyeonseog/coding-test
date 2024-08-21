#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int max = -100000;
    for(int i = 0; i < numbers_len; i++) {
        for(int j = 0; j < numbers_len; j++) {
            if(i != j && numbers_len > 2) {
                if(numbers[i] * numbers[j] > max) {
                    max = numbers[i] * numbers[j];
                }
            }
        }
    }
    if(numbers_len == 2) {
        max = numbers[0] * numbers[1];
    }
    answer = max;
    return answer;
}