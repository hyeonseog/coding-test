#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int max = 0;
    int sum = sides[0] + sides[1] + sides[2];
    int low = 0;
    for(int i = 0; i < 3; i++) {
        if(sides[i] > max) {
            max = sides[i];
        }
    }
    low = sum - max;
    if(max < low) {
        answer = 1;
    }
    else {
        answer = 2;
    }
    return answer;
}