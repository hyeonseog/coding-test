#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i = 0; i < n; i++) {
        if(i * i == n) {
            answer = 1;
            break;
        }
        else {
            answer = 2;
        }
    }
    return answer;
}