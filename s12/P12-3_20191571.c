#include <stdio.h>

int main() {
	float a, b, result;
	char op;
	float *c, *d;

	printf("Input operand 1 : ");
	scanf("%f", &a);
	printf("Input operand 2 : ");
	scanf("%f", &b);
	printf("\n");
	op = getchar();//¹öÆÛ
	printf("Input operator : ");
	scanf("%c", &op);


	c = &a, d = &b;

	switch (op) {
	case '+':
		result = *c + *d;
		break;
	case'-':
		result = *c - *d;
		break;
	case '/':
		result=*c/ *d;
		break;
	case '*':
		result = *c * *d;
		break;
	
	}

	printf("\n\n");

	printf("Result : %.2f", result);
	return 0;
}