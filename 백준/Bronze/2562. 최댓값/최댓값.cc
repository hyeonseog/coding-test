#include<stdio.h>

int main() {
    int a;
    int max = 0;
    int pos = 0;
    for(int i = 1; i < 10; ++i) {
        scanf("%d", &a);
        if(a > max) {
        max = a;
        pos = i;
        }
    }
    printf("%d\n%d\n", max, pos);
    return 0;
}