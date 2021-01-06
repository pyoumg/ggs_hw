#include <stdio.h>
int main() {
	FILE *fp,*fp2;
	int ch;
	float mid,fin,num=0;
	float avg=0;
	char name[11];
	int state, state2;


	fp = fopen("input11-3.txt", "r");
	fp2 = fopen("output11-3.txt", "w");
	if (fp == NULL||fp2==NULL) {
		printf("file open error\n");
		return 1;
	}

	while (1) {
		ch = fscanf(fp,"%s %f %f",name,&mid,&fin);
		if (ch == EOF)break;
		avg += mid;
		avg += fin;
		num++;
		
	}


	state=fclose(fp);
	if (state != 0) {
		printf("file close error\n");
		return 1;
	}
	avg = avg / num/2;


	fp = fopen("input11-3.txt", "r");
	if (fp == NULL) {
		printf("file open error\n");
		return 1;
	}


	fprintf(fp2, "student\t\taverage\tgrade\n");
	for (int i = 0; i < num; i++) {
		ch = fscanf(fp, "%s %f %f", name,&mid, &fin);
		if (ch == EOF)break;
		if ((mid + fin) / 2 >= avg)
			fprintf(fp2, "%s\t\t%.2f\tp\n", name, (mid+fin)/2);
		else
			fprintf(fp2, "%s\t\t%.2f\tf\n", name, (mid + fin) / 2);
	}
	fprintf(fp2, "Total average: %.2f\n", avg);



	state = fclose(fp);
	state2=fclose(fp2);
	if (state != 0 || state2 != 0)
	{
		printf("file close error\n");
		return 1;
	}
	return 0;
}