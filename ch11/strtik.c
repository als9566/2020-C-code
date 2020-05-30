#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[] = "C and C++\t language are best!";
	char* delimiter = " ,\t!";

	printf("문자열 \"%s\"을 >>\n", str1);
	printf("구분자[%s]를 이용하여 토큰을 추출 >>\n", delimiter);
	char* proken = strtok(str1, delimiter);

	while (proken != NULL) {
		printf("%s\n", proken);
		proken = strtok(NULL, delimiter);
	}
	return 0;
}