#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int i, j, sum = 0;
    for(i = 0; i < array_len; i++) {
        for(j = 0; j < (array_len - 1) - i; j++) {
            if(array[j] > array[j + 1]) {
                sum = array[j];
                array[j] = array[j + 1];
                array[j + 1] = sum;
            }
        }
    }
    answer = array[array_len / 2];
    return answer;
}