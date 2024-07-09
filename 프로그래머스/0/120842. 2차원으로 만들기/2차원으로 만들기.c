#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int** solution(int num_list[], size_t num_list_len, int n) {
    int len = num_list_len / n;
    
    int** answer = (int**)malloc(len * sizeof(int*));
    for(int i = 0; i < len; i++) {
        answer[i] = (int*)malloc(n * sizeof(int));
    }

    int a = 0;
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < n; j++) {
            answer[i][j] = num_list[a];
            a++;
        }
    }

    return answer;
}
