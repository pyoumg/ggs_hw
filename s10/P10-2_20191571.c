#include <stdio.h>

void snail(int n[][10], int number);
void print_snail(int n[][10], int number);


int main() {
	int n[10][10];
	int number;
	scanf("%d", &number);

	for (int i = number; i >=1 ; i--) {
		snail(n, i);
		print_snail(n, i);
	}



	return 0;
}

void snail(int n[][10],int number) {//array내용 수정
	int a = (number - 1) * 2;
	 //for문을 몇번 실행해야하는지 결정
	int b = number - 1;
	
	int now = 1,start;
	for (int i = 0; i < number; i++) {
		n[0][i] = now++;//우선 맨 먼저 해야하는 것
	}
	
	

	for (int i = 0; i < a; i++) {
		if (i%4 == 0) {
			start = i / 4 + 1;
			//아래
			for (int j = start; j < start+b; j++) {
				n[j][number - start] = now++;
			}
		}
		else if (i%4 == 1) {
			//왼
			start = number - i / 4-2;
			for (int j = start; j > start- b; j--) {
				n[start+1][j] = now++;
			}
			b--;
		}
		else if (i % 4 == 2) {
			//위
			start = number - 2 - i / 4;
			for (int j = start; j > start - b; j--) {
				n[j][i / 4] = now++;
			}
		}
		else {
			//오른
			start = i / 4+1;
			for (int j = start; j < start + b; j++) {
				n[start][j] = now++;
			}
			b--;
		}

	}

	return;

}

void print_snail(int n[][10],int number) {//array출력
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) {
			printf("%3d ", n[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}