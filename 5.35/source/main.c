#include<stdio.h>
#include<stdlib.h>

int main(){
	int b;
	int e;

	printf("Input a base ");
	scanf_s("%d", &b);
	printf("Input an exponent ");
	scanf_s("%d", &e);

	b = power(b, e);

	printf("%d\n", b);
	system("pause");
	return 0;
}
int power(int b, int e){

	int x;
	int result = 1;
	for (x = 0; x < e; x++)
		result *= b;

	return result;
}