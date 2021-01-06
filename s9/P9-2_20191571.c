#include <stdio.h>
int main() {
	int two[1000], three[1000];
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
		two[i - 1] = i * i;
		three[i - 1] = i * i*i;
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", two[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", three[i]);
	}
	return 0;
}