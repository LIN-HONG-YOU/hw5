#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, i, gcd, lcm;
	printf("�п�J��Ӿ��:");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	while (a <= 0 || b <= 0)
	{
		printf("error!�ЦA��J�@��:");
		scanf_s("%d %d", &a, &b);
	}
	for (i = 1; i <= a; i++){
		if (a%i == 0 && b%i == 0)
			gcd = i;
	}
	lcm = a*b / gcd;
	printf("��ƪ��̤p�����Ƭ�:%d\n", lcm);
	system("pause");
	return 0;
}