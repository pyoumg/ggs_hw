#include <stdio.h>

char data[4000];
int len;
int word_list[4000];
int list_len;
char word[20];
int word_len;
int idx;

void print_text();
int check_in_list(int);
int find_word();
void insert_word();
void delete_word();

//별도로 추가한 함수
void init_word();
void replace_word();
void search_word();
void delete(int);
void insert(char[], int);

int main(void){
	// TODO: init variables
	int operation,state;//state:파일 닫을때 필요한 변수
	char input_name[100];//입력받는 파일 이름
	char output_name[100];//저장할 파일 이름
	int temp;//파일의 내용을 data에 저장할때 쓸 변수
	char buffer;

	//초기화
	len = 0;
	idx = 0;
	list_len = 0;
	word_len = 0;

	// TODO: fileopen, print text, character information...
	printf("### Enter the text file name: ");
	scanf("%s", input_name);//입력파일 이름에는 공백x
	FILE* fp = fopen(input_name, "r");
	if (fp == NULL)//open error
	{
		printf("file open error!\n");
		return 1;
	}
	while (1) {
		temp = fgetc(fp);
		if (temp == EOF)
			break;
		data[len++] = temp;
	}
	state=fclose(fp);//input file 닫기
	
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}

	print_text();
	printf("[%d characters]\n", len);//글자수
	
	while(1){
		printf("\n### [1]Find [2]Insert [3]Delete [4]Replace [0]Save&Quit\n");
		printf("### Enter the operation: ");
		scanf("%d", &operation);
		buffer = getchar();
		switch (operation) {
		case 1:// Find
			find_word();
			break;
		case 2:// Insert
			insert_word();
			break;
		case 3:// Delete
			delete_word();
			break;
		case 4:// Replace
			replace_word();
			break;
		case 0:// Save&Quit
			init_word();
			print_text();
			printf("[%d characters]\n", len);//글자수
			printf("### Save as: ");
			scanf("%s", output_name);//저장할 이름에는 공백x
			FILE *fp2 = fopen(output_name, "w");
			if (fp2 == NULL)//open error
			{
				printf("file open error!\n");
				return 1;
			}
			fprintf(fp2,"%s", data);
			state=fclose(fp2);
			if(state!=0) {
				printf("file close error!\n");
				return 1;
			}

			return 0;

		default:
			printf("error\n");
			break;
		}
	
		
	}//while end
	
	return 0;
}

void print_text(){
	//text를 형식에 맞게 출력해준다.
	//이때 특정 단어들이 빨간색으로 출력되어야 하는 경우도 처리해줘야 한다.
	// TODO: init variables
	int flag = -1;
	printf("\n");
	printf("==============================================================\n");
	// TODO: print the text according to the format
	
	for (int i = 0; i < len; i++)
	{
		flag = -1;//초기화
		if (i - word_len+1 < 0) {
			for (int j = 0; j <= i; j++) {
				if (check_in_list(j) != 1) {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				printf("\033[31m%c\033[0m", data[i]);
			}
			else {
				printf("%c", data[i]);
			}
		}
		else {
			for (int j = i-word_len+1; j <= i; j++) {
				if (check_in_list(j) != 1) {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				printf("\033[31m%c\033[0m", data[i]);
			}
			else {
				printf("%c", data[i]);
			}
		}
	}
	printf("\n==============================================================\n");

}

int check_in_list(int index) {
	// TODO: check whether the index exists in the list
	//현재 index가 word_list에 존재하면 0을, 존재하지 않으면 1을 return
	for (int i = 0; i < list_len; i++) {
		if (word_list[i] == index)
			return 0;
	}
	return 1;
}

int find_word(){
	// TODO: find the word in the text
	// save the index list and return the length of the list
	//text내에서 특정 단어가 존재하는 index들을 word_list에 저장해준다.
	// 특정 단어가 존재하는 개수를 return한다.
	if (word_len != 0)
		init_word();
	
	printf("### Enter the text to find: ");
	for (int i = 0; i < 20; i++) {
		scanf("%c", &word[i]);
		if (word[i] == '\n')
			break;
	}
	//단어의 글자수 세기
	for (int i = 0; i < 20; i++) {//최대 20글자
		if (word[word_len++] == '\n')
			break;
	}
	word_len--;
	//단어 검색
	search_word();
	print_text();
	return list_len;//단어가 존재하는 개수
}

void insert_word(){
	// TODO: insert the word to the text at the index
	//text에 특정 단어를 특정 index에 삽입해준다.
	if (word_len != 0)
		init_word();

	printf("### Enter the text to insert: ");
	for (int i = 0; i < 20; i++) {
		scanf("%c", &word[i]);
		if (word[i] == '\n')
			break;
	}
	for (int i = 0; i < 20; i++) {//최대 20글자
		if (word[word_len++] == '\n')
			break;
	}
	word_len--;
	printf("### Enter the index to insert: ");
	scanf("%d", &idx);
	insert(word,word_len);

	print_text();
	return;
}

void delete_word(){
	// TODO: delete the word in the text
	//text중 특정 index의 특정 단어를 삭제한다.
	if (word_len != 0)//초기화가 안된 상태
		init_word();

	printf("### Enter the text to delete: ");
	for (int i = 0; i < 20; i++) {
		scanf("%c", &word[i]);
		if (word[i] == '\n')
			break;
	}
	for (int i = 0; i < 20; i++) {//최대 20글자
		if (word[word_len++] == '\n')
			break;
	}
	word_len--;
	//단어 검색
	search_word();
	print_text();
	if (list_len == 0) {//검색된 단어가 없는 상태
		printf("Search error\n");
		return;
	}


	for (int i = 0; i < list_len; i++) {
		printf("### %d) %d\n", i + 1, word_list[i]);
	}
	while (1) {
		printf("### Select the index you want to delete: ");
		scanf("%d", &idx);
		if (check_in_list(idx)!=0)
			printf("### Please enter the index in the list.\n");
		else
			break;

	}
	delete(word_len);
	init_word();
	print_text();
}

void delete(int del_word_len)
{
	//idx,len은 global variable
	for (int i = idx; i <= len - del_word_len; i++) {
		data[i] = data[i + del_word_len];//앞에서부터 이동
	}
	len = len - del_word_len;
}

void insert(char ins_word[],int ins_word_len) {
	int j = 0;
	for (int i = len + ins_word_len; i >= idx + ins_word_len; i--) {
		data[i] = data[i - ins_word_len];//뒤에서부터 이동
	}
	for (int i = idx; i < idx + ins_word_len; i++) {
		data[i] = ins_word[j++];
	}
	word_list[0] = idx;
	list_len = 1;
	len = len + ins_word_len;
}


void replace_word() {

	char buffer;
	
	if(word_len!=0)
		init_word();
	printf("### Enter the text to replace: ");
	for (int i = 0; i < 20; i++) {
		scanf("%c", &word[i]);
		if (word[i] == '\n')
			break;
	}
	for (int i = 0; i < 20; i++) {//최대 20글자
		if (word[word_len++] == '\n')
			break;
	}
	word_len--;
	search_word();
	print_text();
	if (list_len == 0) {//검색된 단어가 없는 상태
		printf("Search error\n");
		return;
	}
	for (int i = 0; i < list_len; i++) {
		printf("### %d) %d\n", i + 1, word_list[i]);
	}

	while (1) {
		printf("### Select the index you want to replace: ");
		scanf("%d", &idx);
		if (check_in_list(idx) != 0)
			printf("### Please enter the index in the list.\n");
		else
			break;

	}
	delete(word_len);//기존 단어를 지우고
	buffer = getchar();
	init_word();//단어 초기화

	printf("### Enter the text replace with: ");
	for (int i = 0; i < 20; i++) {
		scanf("%c", &word[i]);
		if (word[i] == '\n')
			break;
	}
	for (int i = 0; i < 20; i++) {//최대 20글자
		if (word[word_len++] == '\n')
			break;
	}
	word_len--;
	insert(word,word_len);//새로운 단어를 삽입
	print_text();


}


void init_word() {
	for (int i = 0; i < list_len; i++)
		word_list[i] = -1;//초기화
	word_len = 0;
	list_len = 0;
}

void search_word() {
	for (int i = 0; i < len - word_len; i++) {
		for (int j = 0; j < word_len; j++) {
			if (data[j+i] != word[j])
				break;
			else if (j == word_len - 1)
				word_list[list_len++] = i;
		}
	}
}