#include <stdio.h>

double change(char arr[]);
int main() {
	char arr[15];
	for (int i = 0; i < 14; i++) {
		scanf("%c", &arr[i]);
		if (arr[i] == '\n')
			break;
	}

	printf("Result: %lf\n", change(arr));


	return 0;
}

double change(char arr[]) {
	double ans;
	double div = 1;

	if (arr[0] != '-') {
		ans = arr[0] - '0';
	}
	for (int i = 1; i < 14; i++) {
		if (arr[i] == '\n')
			break;
		if (arr[i] == '.') {
			if (arr[0] == '-')
				div = -0.1;
			else
				div = 0.1;
		}
		else if (div < 1) {
			ans = ans + (arr[i] - '0')*div;

			div = div / 10;
		}
		else if (arr[0] != '-') {
			ans = ans * 10 + arr[i] - '0';
		}
		else {
			if (i == 1)
				ans = -1 * (arr[i] - '0');
			else
				ans = ans * 10 - (arr[i] - '0');
		}
	}
	return ans;
}
