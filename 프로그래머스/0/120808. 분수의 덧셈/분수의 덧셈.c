#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(1);
    int mom = denom1 * denom2;
    int son = (denom1 * numer2) + (denom2 * numer1);
    int n = 1;
    for(int i = 1; i <= mom; i++) {
        if(mom % i == 0 && son % i == 0) {
            n = i;
        }
    }
    answer[0] = son / n;
    answer[1] = mom / n;
    return answer;
}