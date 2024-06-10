#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int count = 0;
    int n = 0;
    int result = 0;
    int answer = 0;
    if(array_len == 1) {
        answer = array[0];
        return answer;
    }
    for(int i = 0; i < array_len; i++) {
        count = 0;
        for(int j = 0; j < array_len; j++) {
            if(array[i] == array[j]) {
                count++;
            }
        }
        if(count > n) {
            n = count;
            result = array[i];
            answer = result;
        }
        else if(count == n && array[i] != result) {
            result = -1;
        }
    }
    answer = result;
    return answer;
}