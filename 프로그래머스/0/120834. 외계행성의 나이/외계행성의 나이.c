#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char)*4);
    int idx = 0, num = age;
    while(num>0){
        int dig = num%10;
        answer[idx++] = dig;
        num = num/10;
    }
    for(int i = 0; i<idx/2; i++){
        char tmp = answer[i];
        answer[i] = answer[idx-i-1];
        answer[idx-i-1] = tmp;   
    }
    for(int i = 0; i<idx; i++) answer[i] = answer[i] +'a';
    answer[idx] = '\0';
    return answer;
}