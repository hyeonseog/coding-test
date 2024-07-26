#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {

  int n, m, a, b;
	int arr[100];
	scanf("%d %d", &n, &m);

	for(int i = 1; i <= n; i++)
		arr[i] = i;

	while(m--) {
		scanf("%d %d", &a, &b);

		for(int i = 0; i <= (b - a) / 2; i++) {
			swap(&arr[a + i], &arr[b - i]);
		}
	}

	for(int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}

  return 0;
}