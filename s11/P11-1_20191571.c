#include <stdio.h>
int main() {
	FILE *fp,*fp2;
	char ch;
	int state,state2;

	fp = fopen("input11-1.txt", "r");
	fp2 = fopen("output11-1.txt", "w");
	if (fp == NULL||fp2==NULL) {
		printf("file open error\n");
		return 1;
	}
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF)break;
		fputc(ch, fp2);
	}


	state=fclose(fp);
	state2=fclose(fp2);
	if (state != 0 || state2 !=0) {
		printf("file close error\n");
		return 1;
	}


	return 0;
}