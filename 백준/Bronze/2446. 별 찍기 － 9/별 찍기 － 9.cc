#include<stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++) {
        for(int k = 0; k < i; k++) {
            printf(" ");
        }
        for(int j = 0; j < 2 * a - 1 - i * 2; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < a - 1; i++) {
        for(int j = 0; j < a - 2 - i; j++) {
            printf(" ");
        }
        for(int k = 0; k < (i + 1) * 2 + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}