#include <stdio.h>
int main() {
	int n;
	int a, b,carry=0;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	if (a % 10 + b % 10 >= 10)
		carry++;//�����ڸ���
	if (a / 10 % 10 + b / 10 % 10 + carry >= 10)
	{//�ι�°
		carry++;
		if (a / 100 + b / 100 + 1 >= 10)
			carry++;
	}
	else {
		if (a / 100 + b / 100 >= 10)
			carry++;
	}
	printf("%d carry operations\n",carry);
	return 0;
}