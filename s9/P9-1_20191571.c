#include <stdio.h>
int main() {
	int a[5], b[5];
	for (int i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < 5; i++)
		scanf("%d", &b[i]);

	for (int i = 0; i < 5; i++) {
		if (a[i] != b[i]) {
			printf("false\n");
			break;
		}

		if (i == 4)
		{
			printf("true\n");

		}
	}

	return 0;
}