#include <stdio.h>

double avg(int n[][100], int index, int number);

int main() {
	int n[100][100];
	int number;
	
	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) {
			scanf("%d", &n[i][j]);
		}
	}


	for (int i = 0; i < number; i++) {
		printf("%.2lf ", avg(n, i, number));
	}


	return 0;
}

double avg(int n[][100], int index, int number) {
	double ans = 0;
	for (int i = 0; i < number; i++) {
		ans += n[i][index];
	}
	ans = ans / number;
	return ans;
}