#include <stdio.h>
int main() {
	int a, b;
	printf("Enter two integer: ");
	scanf("%d %d", &a, &b);
	printf("common divisor: ");
	if (a % 2 == 0 && b % 2 == 0)
		printf("2 ");
	if (a % 3 == 0 && b % 3 == 0)
		printf("3 ");
	if (a % 5 == 0 && b % 5 == 0)
		printf("5 ");
	printf("\n");
	return 0;
}