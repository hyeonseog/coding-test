#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    // 두 개의 가장 큰 값을 저장할 변수를 초기화합니다.
    int max1 = numbers[0];
    int max2 = numbers[1];

    // 만약 초기값이 잘못되었을 경우를 대비합니다.
    if (max1 < max2) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    // 배열을 한 번 순회하면서 두 개의 가장 큰 값을 찾습니다.
    for (size_t i = 2; i < numbers_len; i++) {
        if (numbers[i] > max1) {
            max2 = max1;
            max1 = numbers[i];
        } else if (numbers[i] > max2) {
            max2 = numbers[i];
        }
    }

    // 두 개의 가장 큰 값을 곱한 결과를 반환합니다.
    return max1 * max2;
}
