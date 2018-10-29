#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, i, gcd, lcm;
	printf("請輸入兩個整數:");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	while (a <= 0 || b <= 0)
	{
		printf("error!請再輸入一次:");
		scanf_s("%d %d", &a, &b);
	}
	for (i = 1; i <= a; i++){
		if (a%i == 0 && b%i == 0)
			gcd = i;
	}
	lcm = a*b / gcd;
	printf("兩數的最小公倍數為:%d\n", lcm);
	system("pause");
	return 0;
}