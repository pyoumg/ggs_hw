#include <stdio.h>
void Move_up(int *x, int *y, int d); // d만큼 위로 이동
void Move_down(int *x, int *y, int d); // d만큼 아래로 이동
void Move_right(int *x, int *y, int d); // d만큼 오른쪽으로 이동
void Move_left(int *x, int *y, int d); // d만큼 왼쪽으로 이동
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
void Move_up(int *x, int *y, int d) {// d만큼 위로 이동
	*y += d;
}
void Move_down(int *x, int *y, int d) { // d만큼 아래로 이동

	*y -= d;

}
	
void Move_right(int *x, int *y, int d) { // d만큼 오른쪽으로 이동
	*x += d;

}
	
void Move_left(int *x, int *y, int d) { // d만큼 왼쪽으로 이동
	*x -= d;


}