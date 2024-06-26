#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    for(int i = 0; i < 200; i++) {
        if(hp >= 5) {
            for(int i = 0; i < 200; i++) {
                if(hp >= 5) {
                    hp -= 5;
                    answer++;
                }
                else {
                    break;
                }
            }
        }
        else if(hp >= 3) {
            for(int i = 0; i < 100; i++) {
                if(hp >= 3) {
                    hp -= 3;
                    answer++;
                }
                else {
                    break;
                }
            }
        }
        else if(hp >= 1) {
            for(int i = 0; i < 10; i++) {
                if(hp >= 1) {
                    hp -= 1;
                    answer++;
                }
                else {
                    break;
                }
            }
        }
    }
    return answer;
}