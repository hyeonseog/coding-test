#include <stdio.h>

int main()
{
    int n;
    int arr[1000];
    int temp;
    int min;
    int result = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            result += arr[j];
        }
    }
    
    printf("%d", result);

    return 0;
}
