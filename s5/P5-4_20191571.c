#include <stdio.h>
int main() {
	int a, b, c;

	printf("Enter 3 integers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (b >= c && b >= a)
		printf("%d ", b);
	else {
		printf("%d ", c > a ? c : a);
	}

	//���� ū ���� ���


	if ((a <= b && a >= c) || (a <= c && a >= b))
	{
		printf("%d ", a);
		
	}
	else {
		printf("%d ", (b - c)*(b - a) <= 0 ? b : c);
	}
	
	//�ι�°�� ū ���� ���


	if ( b <= c && b <= a)
		printf("%d ", b);
	else {
		printf("%d ", c < a ? c : a);
	}

	return 0;
}