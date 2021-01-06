#include <stdio.h>
int main() {
	int birthday,year=0;
	int y, m, d;

	printf("Birthday : ");
	scanf("%d", &birthday);
	y = birthday / 10000;
	m = birthday / 100 % 100;
	d = birthday % 100;
	printf("Your birthday is %d / %d / %d\n",y ,m,d);
	printf("Year : ");
	scanf("%d", &year);
	printf("In %d, your age is %d\n", year, year - y + 1);
	return 0;
}