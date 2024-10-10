#include <stdio.h>

int main()
{
    int n;
    int price;
    int count = 0;
    
    scanf("%d %d", &n, &price);
    
    int coin[10];
    
    for(int i = n - 1; i >= 0; i--) {
        scanf("%d", &coin[i]);
    }
    
    for(int i = 0; i < n; i++) {
        if(price >= coin[i]) {
            count += price / coin[i];
            price = price % coin[i];
        }
    }
    
    printf("%d", count);
    return 0;
}