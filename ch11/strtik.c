#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[] = "C and C++\t language are best!";
	char* delimiter = " ,\t!";

	printf("���ڿ� \"%s\"�� >>\n", str1);
	printf("������[%s]�� �̿��Ͽ� ��ū�� ���� >>\n", delimiter);
	char* proken = strtok(str1, delimiter);

	while (proken != NULL) {
		printf("%s\n", proken);
		proken = strtok(NULL, delimiter);
	}
	return 0;
}