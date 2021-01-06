#include <stdio.h>
void swap(float *x, float *y);
int main() {
	float x, y;
	
	printf("Input two number\n");
	printf("\tx : ");
	scanf("%f", &x);
	printf("\ty : ");
	scanf("%f", &y);
	printf("------------------------------\n");

	printf("Before : x [%f] y [%f]\n",x,y);


	swap(&x, &y);

	printf("------------------------------\n");
	printf("After  : x [%f] y [%f]\n", x, y);
	return 0;
}
void swap(float* x, float* y) {
	float temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}