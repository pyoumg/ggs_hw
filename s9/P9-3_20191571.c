#include <stdio.h>
int main() {
	int arr[10],min,max,temp;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);

	}
	min = arr[0], max = arr[0];

	for (int i = 0; i < 10; i++) {
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < 5; i++) {
		temp = arr[i];
		arr[i] = arr[9 - i];
		arr[9 - i] = temp;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Max: %d, Min: %d\n", max, min);
	return 0;
}