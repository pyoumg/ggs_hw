#include <stdio.h>
void func_gcd(int a, int b, int* gcd);

int main() {
	int a, b, gcd=0;
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	func_gcd(a, b, &gcd);
	printf("GCD: %d", gcd);
	return 0;
}
void func_gcd(int a, int b, int* gcd) {//recursion 
	int temp;
	if (a < b)//a�� ������ �ƴϱ⶧���� b�� 0�̾ƴ�
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (b != 0)
		 func_gcd(b, a%b, gcd);
	else
	{
		*gcd = a;
		return;
	}

}