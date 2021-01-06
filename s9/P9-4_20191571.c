#include <stdio.h>

void changeArr(char arr[]);
int main() {
	char arr[51];

	for (int i = 0; i < 50; i++) {
		scanf("%c", &arr[i]);
		if (arr[i] == '\n') {
			break;
		}
	}

	changeArr(arr);

	printf("%s\n", arr);

	return 0;
}

void changeArr(char arr[]) {
	for (int i = 0; i < 50; i++) {
		if (arr[i] >= 'a'&&arr[i] <= 'z')
			arr[i] += -'a' + 'A';

		if (arr[i] == '\n') {
			arr[i] = '\0';
			break;
		}
		if (i == 49)
			arr[50] = '\0';
	}
	return;
}