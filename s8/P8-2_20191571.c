#include <stdio.h>

int isDivisor(int m, int n);
int isPrime(int m);
int main() {
	int n;
	printf("Input : ");
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		if (isDivisor(i, n) && isPrime(i))
			printf("%d\t", i);
	}

	return 0;
}

int isDivisor(int m, int n) {
	if (n%m == 0)
		return 1;
	else
		return 0;
}


int isPrime(int m) {
	for (int i = 2; i < m; i++) {
		if (m%i == 0)
			return 0;
	}
	return 1;
}