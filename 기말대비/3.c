#include <stdio.h>


int main() {
	char data[5000];
	int alp['z' - 'a' + 1];
	int len = 0;
	
	for (int i = 0; i < 'z' - 'a' + 1; i++) {
		alp[i] = 0;//초기화
	}
	
	for (len = 0; len< 5000; len++) {
		data[len] = getchar();
		if (data[len] == '\n') {
			data[len] = '\0';
			break;
		}
	}
	for (int i = 0; i < len; i++) {
		if (data[i] >= 'a'&&data[i] <= 'z') {//소문자
			alp[data[i] - 'a']++;
		}
		else if (data[i] >= 'A'&&data[i] <= 'Z') {//대문자
			alp[data[i] - 'A']++;
		}
	}
	for (int i = 0; i < 'z' - 'a' + 1; i++) {
		printf("[%c]: %d, ", i + 'a', alp[i]);
	}
	return 0;
}
