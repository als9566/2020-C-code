#include <stdio.h>

int main(void)
{
	char ch = 'a';
	printf("%c %d\n", ch, ch);

	char java[] = { 'j','a','v','a','\0' };
	printf("%s\n", java);

	char c[] = "c language";
	printf("%s\n", c);

	char csharp[5] = "c#";
	printf("%s\n", csharp);

	printf("%c%c\n", csharp[0], csharp[1]);

	return 0;
}