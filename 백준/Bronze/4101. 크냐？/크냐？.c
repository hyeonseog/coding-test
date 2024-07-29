#include<stdio.h>

int main(void) {
    int a = 0;
    int b = 0;
    while(1) {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) {
            break;
        }
        else if(a < b || a == b) {
            printf("No\n");
        }
        else {
            printf("Yes\n");
        }
    }
    return 0;
}