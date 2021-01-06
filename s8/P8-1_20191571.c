#include <stdio.h>

int result(int, int);

int main() {
	int a, b,temp;
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	if (a < 1 || b < 1)
		printf("Input is less than 1\n");
	else {
		if (b < a) {//두번째 정수가 첫번째 정수보다 작은경우
			temp=a;
			a = b;
			b = temp;
			
		}
		printf("Result: %d\n",result(a, b));
	}
	return 0;
}

int result(int a, int b) {
	int ans = 0;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0 || i % 3 == 0)
			ans += i;
	}
	return ans;
}