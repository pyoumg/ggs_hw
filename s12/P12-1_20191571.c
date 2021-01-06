#include <stdio.h>

int main() {
	int a, b, c, d;
	int* max, *min;
	printf("Input 4 integer : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = &a, min = &a;
	
	if (*max < b)
		max = &b;
	if (*max < c)
		max = &c;
	if (*max < d)
		max = &d;
	if (*min > b)
		min = &b;
	if (*min > c)
		min = &c;
	if (*min > d)
		min = &d;

	printf("Maximum value is %d\n", *max);
	printf("%d is stored at address %p\n", *max,max);

	printf("Minimum value is %d\n", *min);
	printf("%d is stored at address %p\n", *min,min);

	return 0;
}