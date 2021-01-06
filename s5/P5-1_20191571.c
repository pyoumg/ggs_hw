#include <stdio.h>
int main() {
	float a;
	printf("Input: ");
	scanf("%f", &a);
	printf("Use \">\": %d\n", (int)(a + 0.5) > (int)a);
	printf("Use \">=\": %d\n", a - (int)a >= 0.5);
	printf("Use \"==\": %d\n", (int)(a + 0.5) == (int)a + 1);
	printf("Use \"!=\": %d\n", (int)(a + 0.5) != (int)a);


	return 0;
}