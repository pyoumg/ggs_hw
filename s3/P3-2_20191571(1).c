#include <stdio.h>


float result_avg(int,int,int,int);
float result_dev(int,float);


int main() {
	int a, b, c, d;
	float avg, dev;

	printf("Enter the first number : ");
	scanf("%d", &a);
	printf("Enter the second number : ");
	scanf("%d", &b);
	printf("Enter the third number : ");
	scanf("%d", &c);
	printf("Enter the fourth number : ");
	scanf("%d", &d);
	avg = result_avg(a,b,c,d);
	printf("******** average is  %.2f ********\n",avg);
	
	dev=result_dev(a, avg);
	printf("first number :\t%10d  -- deviation :%20.2f\n", a, dev);
	dev = result_dev(b, avg);
	printf("second number :\t%10d  -- deviation :%20.2f\n", b, dev);
	dev = result_dev(c, avg);
	printf("third number :\t%10d  -- deviation :%20.2f\n", c, dev);
	dev = result_dev(d, avg);
	printf("fourth number :\t%10d  -- deviation :%20.2f\n", d, dev);


	return 0;
}

float result_avg(int a,int b,int c,int d) {
	return ((float)a + b + c + d) / 4;
}
float result_dev(int num,float avg) {
	return num - avg;
}
