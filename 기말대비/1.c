#include <stdio.h>

void reverse_store(char str[], int len, int now);
int main() {
	char str[101];
	int len = 0;
	printf("Input the string: ");
	for (len; len < 100; len++) {
		scanf("%c", &str[len]);
		if (str[len] == '\n')
			break;
	}
	
	reverse_store(str, len, 0);
	str[len + 1] = '\0';//널 문자 저장
	printf("%s", str);
	return 0;
}

void reverse_store(char str[], int len, int now) {
	char temp;
	if (now >= len / 2)
		return;
	temp = str[now];
	str[now] = str[len - now - 1];
	str[len - now - 1] = temp;
	//swap

	reverse_store(str, len, now + 1);
	//recursive
}