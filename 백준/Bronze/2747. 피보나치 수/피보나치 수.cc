#include<stdio.h>

int main(void) {
    long long a;
    long long arr[50];
    scanf("%lld", &a);
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i < a + 1; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("%lld", arr[a]);
    return 0;
}