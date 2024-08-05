#include <stdio.h>

int main(void) {
    int a;
    int kor, mat, kord, matd;
    scanf("%d %d %d %d %d", &a, &kor, &mat, &kord, &matd);
    
    int korl = kor / kord;
    if(kor % kord != 0) {
        korl += 1;
    }
    
    int matl = mat / matd;
    if(mat % matd != 0) {
        matl += 1;
    }
    
    int maxDays = (korl > matl) ? korl : matl;
    
    printf("%d\n", a - maxDays);
    
    return 0;
}
