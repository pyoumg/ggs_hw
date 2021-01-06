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

void snail(int n[][10],int number) {//array���� ����
	int a = (number - 1) * 2;
	 //for���� ��� �����ؾ��ϴ��� ����
	int b = number - 1;
	
	int now = 1,start;
	for (int i = 0; i < number; i++) {
		n[0][i] = now++;//�켱 �� ���� �ؾ��ϴ� ��
	}
	
	

	for (int i = 0; i < a; i++) {
		if (i%4 == 0) {
			start = i / 4 + 1;
			//�Ʒ�
			for (int j = start; j < start+b; j++) {
				n[j][number - start] = now++;
			}
		}
		else if (i%4 == 1) {
			//��
			start = number - i / 4-2;
			for (int j = start; j > start- b; j--) {
				n[start+1][j] = now++;
			}
			b--;
		}
		else if (i % 4 == 2) {
			//��
			start = number - 2 - i / 4;
			for (int j = start; j > start - b; j--) {
				n[j][i / 4] = now++;
			}
		}
		else {
			//����
			start = i / 4+1;
			for (int j = start; j < start + b; j++) {
				n[start][j] = now++;
			}
			b--;
		}

	}

	return;

}

void print_snail(int n[][10],int number) {//array���
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) {
			printf("%3d ", n[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}