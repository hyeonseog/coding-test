#include<stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    float arr[a];
    float M = 0;
    float e = 0;
    for(int i = 0; i < a; i++) {
        scanf("%f", &arr[i]);
        if(arr[i] > M) {
            M = arr[i];
        }
    }
    for(int j = 0; j < a; j++) {
        arr[j] = arr[j] / M * 100;
        e += arr[j];
    }
    printf("%f", e / a);
    return 0;
}