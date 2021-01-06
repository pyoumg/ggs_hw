#include <stdio.h>

int main() {
	int n=-1;
	int a, b;
	
	do {
		printf("[0]: Exit [1]:Add [2]: Subtract [3]: Multiply [4]: Divide\n");
		scanf("%d", &n);
		if (n != 0)
		{
			scanf("%d %d", &a, &b);


			if (n == 1)
			{
				printf("%d + %d = %d\n", a, b, a + b);
			}
			else if (n == 2) {
				printf("%d - %d = %d\n", a, b, a - b);

			}
			else if (n == 3) {
				printf("%d * %d = %d\n", a, b, a*b);
			}
			else {//명령은 0,1,2,3,4만 들어온다고 가정
				if (b == 0)
					printf("error\n");
				else
					printf("%d / %d = %d\n", a, b, a / b);
			}
			printf("\n");
		}

	} while (n != 0);


	printf("Bye!\n");

	return 0;
}