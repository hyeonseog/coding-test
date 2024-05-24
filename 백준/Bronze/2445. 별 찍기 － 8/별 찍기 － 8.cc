#include<stdio.h>

int main(void) {
    int a;
    int sum;
    scanf("%d", &a);
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < i + 1; j++) {
            printf("*");
        }
        for(int k = 0; k < a * 2 - 2 - i * 2; k++){
            printf(" ");
        }
        for(int q = 0; q < i + 1; q++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a - 1 - i; j++) {
            printf("*");
        }
        for(int k = 0; k < i * 2 + 2; k++) {
            printf(" ");
        }
        for(int q = 0; q < a - 1 - i; q++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}