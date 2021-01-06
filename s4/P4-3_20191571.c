#include <stdio.h>
void fourMath(int *c, int *d);
void printResult(int *c, int *d);
int a, b;
int main() {
	int a, b;
	printf("Input two number: ");
	scanf("%d %d", &a, &b);
	fourMath(&a, &b);
	printResult(&a, &b);
	return 0;
}
void fourMath(int *c, int *d) {
	a = *c + *d;
	b = *c - *d;
	*c = *c*(*d);
	*d = (*c) / (*d) / (*d);

}


void printResult(int *c, int *d) {
	printf("Result:\n");
	printf("a + b =%10d\n",a);
	printf("a - b =%10d\n", b);
	printf("a * b =%10d\n", *c);
	printf("a / b =%10d\n", *d);


}