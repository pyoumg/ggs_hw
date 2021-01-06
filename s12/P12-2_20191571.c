#include <stdio.h>

int main() {
	float a, b, c;
	float* m1, *m2;

	printf("Input m1 and m2: ");
	scanf("%f %f", &a, &b);

	m1 = &a, m2 = &b;

	printf("\nTorque : %f\n", 2 * (*m1)*(*m2) / (*m1 + *m2)*9.8);


	return 0;
}