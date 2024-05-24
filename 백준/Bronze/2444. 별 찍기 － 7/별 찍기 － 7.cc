#include<stdio.h>

int main(void) {
    int a;
    int sum;
    scanf("%d", &a);
    for(int i = 0; i < a; i++) {
        for(int k = 0; k < a - 1 - i; k++) {
            printf(" ");
        }
        for(int j = 0; j <   i * 2 + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    sum = (a - 1) * 2 - 1;
    for(int i = 0; i < a - 1; i++) {
        for(int j = 0; j < i + 1; j++) {
            printf(" ");
        }
        for(int k = 0; k < sum - i * 2; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}