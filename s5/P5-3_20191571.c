#include <stdio.h>
int main() {
	int a, b = -1, c = -1;
	printf("Enter the year to be tested: ");
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
	{
		printf("It is a leap year.\n");
	}
	else {
		printf("It is not a leap year.\n");
		b = a / 4 * 4;
		c = b + 4;
	}
	if (b != -1 && b % 100 == 0 && b % 400 != 0) {
		b = c;//b가 윤년이 아님
	}
	if (b != -1 && b != c && c % 100 == 0 && c % 400 != 0) {
		c = b;//c가 윤년이 아님
	}
	//nested if 를 못써서 조건별로 if문 쓰기
	if (b != -1 && b != c && c - a < a - b) {
		b = c;//b가 가장 가까운 윤년이 되도록
	}
	if (b != -1)
		printf("%d is a leap year.\n", b);

	return 0;
}