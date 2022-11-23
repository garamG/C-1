#include <stdio.h>
#include <string.h>
////문자 입력 출력: getchar(), putchar()
////공백 포함 문자열 받고 싶을 때 : fgets
//// 문자열 출력: puts,fputs

void convert(char str1[], int length, char str2[]) {
	const int diff = 'a' - 'A';
	for (int i = 0; i < length; i++) {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str2[i]=str1[i] + diff;
		}
		else if (str1[i] >= 'a' && str1[i] <= 'z') {
			 str2[i]=str1[i] - diff;
		}
		else { str2[i] = str1[i]; }
	}
}

int main() {
	char str_before[50];
	char str_after[50];

	puts("Input>");
	fgets(str_before, sizeof(str_before), stdin);
	convert(str_before, strlen(str_before), str_after);
	str_after[strlen(str_before) - 1] = '\0';
	
	printf("%s", str_after);
	
	

	
	


	

	


	return 0;
}