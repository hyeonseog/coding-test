#include<stdio.h>

int main(void) {
    int a;
    int arr[100] = {0,};
    for(int i = 1; i <= 28; i++) {
        scanf("%d", &a);
        arr[a] = 1;
    }
    for(int i = 1; i <= 30; i++) {
        if(arr[i] == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}