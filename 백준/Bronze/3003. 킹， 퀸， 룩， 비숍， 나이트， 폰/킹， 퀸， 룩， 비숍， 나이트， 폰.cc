#include<stdio.h>

int main(void) {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int g = 1 - a;
    int h = 1 - b;
    int i = 2 - c;
    int j = 2 - d;
    int k = 2 - e;
    int l = 8 - f;
    printf("%d %d %d %d %d %d", g, h, i, j, k, l);
    return 0;
}