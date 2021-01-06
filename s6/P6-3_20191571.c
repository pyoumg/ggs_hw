#include <stdio.h>
float plus(float, float);
float minus(float, float);
float div(float, float);
float mul(float, float);


int main() {
	float a, b,ans;
	char op;
	printf("Operator (+, -, *, /)\n");
	printf("Please enter the formula. (ex : 12.3 + 5.5)\n");

	scanf("%f %c %f", &a, &op, &b);
	switch (op){
	case '+':
		printf("%.2f + %.2f = %.2f\n",a,b,plus(a, b));
		break;
	case '-':
		printf("%.2f - %.2f = %.2f\n", a, b, minus(a, b));
		break;
	case '*':

		printf("%.2f * %.2f = %.2f\n", a, b, mul(a, b));
		break;
	case '/':
		b==0 ? printf("Division by zero\n"): printf("%.2f / %.2f = %.2f\n", a, b, div(a,b));
		break;

	default://잘못된 operator
		printf("Invalid operator : %c\n", op);
		break;



	}

	return 0;
}

float plus(float a, float b) {
	return a + b;

}
float minus(float a, float b) {
	return a - b;
}
float div(float a, float b) {
	return a / b;//b가 0일때는 div가 실행되지 않음
}
float mul(float a, float b) {
	return a * b;
}