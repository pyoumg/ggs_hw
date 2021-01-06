#include <stdio.h>
float resultx(int a, int b,int c,int d);
float resulty(int a, int b, int c, int d);

int main() {
	int a, b, c, d;
	float x, y;
	printf("1st equation: y = ax - b, input 'a' and 'b'\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("2nd equation: y = cx - d, input 'c' and 'd'\n");
	printf("c = ");
	scanf("%d", &c);
	printf("d = ");
	scanf("%d", &d);

	x = resultx(a, b, c, d);
	y = resulty(a, b, c, d);
	printf("result:\n");
	printf("x is %f\n", x);
	printf("y is %f\n", y);
	
	
	return 0;
}


float resultx(int a, int b, int c, int d){
	return ((float)b - d) / (a - c);

}
float resulty(int a, int b, int c, int d) {
	return ((float)b*c - a * d) / (a - c);
}
