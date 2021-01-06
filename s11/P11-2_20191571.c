#include <stdio.h>
int main() {
	FILE *fp,*fp2;
	int ch;
	float a, b,c,ans=0;
	char d;
	int state, state2;


	fp = fopen("input11-2.txt", "r");
	fp2 = fopen("output11-2.txt", "w");
	if (fp == NULL||fp2==NULL) {
		printf("file open error\n");
		return 1;
	}
	while (1) {
		ch = fscanf(fp,"%f %c %f = %f",&a,&d,&b,&c);
		if (ch == EOF)break;
		
		switch (d) {
		case '+':
			ans = a + b;
			break;
		case '-':
			ans = a - b;
			break;
		case '*':
			ans = a * b;
			break;
		case '/':
			ans = a / b;
			break;
		case '%':
			ans = (int)a % (int)b;
			break;

		}
		fprintf(fp2,"%.2f %c %.2f = %.2f", a, d, b, c);
		if (ans == c)
			fprintf(fp2, " correct\n");
		else
			fprintf(fp2, " incorrect\n");
	}


	state=fclose(fp);
	state2=fclose(fp2);
	if (state != 0 || state2 != 0)
	{
		printf("file close error\n");
		return 1;
	}
	return 0;
}