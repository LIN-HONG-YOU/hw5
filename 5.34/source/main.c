#include<stdio.h>

#include<stdlib.h>



unsigned long long int fibonacci(unsigned int n);





int main(){
	int i;
	for ( i = 0; i < 95; i++){

		printf("%llu\n", fibonacci(i));

	}

	system("pause");

	return 0;

}







	unsigned long long int fibonacci(unsigned int n)
{

	if (n == 0)
		return 0;

	if (n == 1)
		return 1;
	if (n>1)
	return (fibonacci(n - 1) + fibonacci(n - 2));

}