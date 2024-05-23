#include<stdio.h>

int main(void) {
    int K, D, A;
    char p;
    char o;
    int sum;
    scanf("%d %c %d %c %d", &K, &p, &D, &o, &A);
    sum = K + A;
    if(sum < D || D == 0) {
        printf("hasu");
    }
    else {
        printf("gosu");
    }
    return 0;
}