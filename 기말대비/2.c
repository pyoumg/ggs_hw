#include <stdio.h>


int main() {
	int n;
	int a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1)//������
				printf("*");
			else if (j == 0||j==n-1)//������
				printf("*");
			else {//�밢��
				if (j == i || j == n - i-1)
					printf("*");
				else
					printf(" ");
			}

		}
		printf("\n");

	}


	return 0;
}
