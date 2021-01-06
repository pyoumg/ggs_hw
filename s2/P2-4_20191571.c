#include <stdio.h>
int main() {
	int a,b=0,day3=3,day6=6;
	float c, d;
	printf("Price : ");
	
	scanf("%d", &a);
	b = a * 1.05*1.05*1.05;//6°³¿ùÈÄ
	c = a / 3.0, d = b / 6.0;
	printf("----------------output---------------\n");
	printf("Month\t\t:%10d%10d\n",day3,day6);
	printf("Payment\t\t:%10d%10d\n", a, b);
	printf("-------------------------------------\n");
	printf("Pay/month\t:%10.2f%10.2f\n", c, d);
	return 0;
}