#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char ch;
	printf("請輸入一個字母:");
	ch = getchar();
	printf("此字母的大寫是:%c\n", toupper(ch));
	printf("此字母的小寫是:%c\n", tolower(ch));
	system("pause");
	return 0;
}