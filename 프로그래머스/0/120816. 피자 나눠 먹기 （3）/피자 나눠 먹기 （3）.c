#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 0;
    int result = 1;
    for(int i = 0; i < n; i++) {
        if(slice * result / n >= 1) {
            break;
        }
        else {
            result++;
        }
    }
    answer = result;
    return answer;
}