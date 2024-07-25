#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // 문자열의 길이를 구합니다.
    int len = 0;
    while (my_string[len] != '\0') {
        len++;
    }

    // 변환된 문자열을 저장할 메모리를 할당합니다.
    char* answer = (char*)malloc((len + 1) * sizeof(char));

    // 대소문자를 변환합니다.
    for (int i = 0; i < len; i++) {
        if (my_string[i] >= 'a' && my_string[i] <= 'z') {
            answer[i] = my_string[i] - 'a' + 'A';
        } else if (my_string[i] >= 'A' && my_string[i] <= 'Z') {
            answer[i] = my_string[i] - 'A' + 'a';
        } else {
            answer[i] = my_string[i];
        }
    }

    // 문자열의 끝을 표시하는 null 문자를 추가합니다.
    answer[len] = '\0';

    return answer;
}

int main() {
    const char* test_string = "Hello World!";
    char* result = solution(test_string);
    printf("변환된 문자열: %s\n", result);
    free(result);
    return 0;
}
