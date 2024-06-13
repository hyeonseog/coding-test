#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int result = 1;
    for(int i = 0; i < n; i++) {
    if(result * 6 % n == 0) {
        answer = result;
        break;
    }
    else {
        result++;
    }
    }
    return answer;
}