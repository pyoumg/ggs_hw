#include <stdio.h>
void Move_up(int *x, int *y, int d); // d��ŭ ���� �̵�
void Move_down(int *x, int *y, int d); // d��ŭ �Ʒ��� �̵�
void Move_right(int *x, int *y, int d); // d��ŭ ���������� �̵�
void Move_left(int *x, int *y, int d); // d��ŭ �������� �̵�
int main() {
	int x, y;
	printf("Enter (x, y): ");
	scanf("%d %d", &x, &y);
	printf("move up 3\n");
	Move_up(&x, &y, 3);
	printf("current x, y: (%d, %d)\n", x, y);
	printf("move right 10\n");
	Move_right(&x, &y, 10);
	printf("current x, y: (%d, %d)\n", x, y);
	printf("move down 8\n");
	Move_down(&x, &y, 8);
	printf("current x, y: (%d, %d)\n", x, y);
	printf("move left 21\n");
	Move_left(&x, &y, 21);
	printf("current x, y: (%d, %d)\n", x, y);



	return 0;
}
void Move_up(int *x, int *y, int d) {// d��ŭ ���� �̵�
	*y += d;
}
void Move_down(int *x, int *y, int d) { // d��ŭ �Ʒ��� �̵�

	*y -= d;

}
	
void Move_right(int *x, int *y, int d) { // d��ŭ ���������� �̵�
	*x += d;

}
	
void Move_left(int *x, int *y, int d) { // d��ŭ �������� �̵�
	*x -= d;


}