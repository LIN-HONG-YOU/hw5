#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char ch;
	printf("�п�J�@�Ӧr��:");
	ch = getchar();
	printf("���r�����j�g�O:%c\n", toupper(ch));
	printf("���r�����p�g�O:%c\n", tolower(ch));
	system("pause");
	return 0;
}