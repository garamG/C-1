#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int divide(int n) {
	if (n >= 1) {
		divide(n / 2);
	}
		printf("%d", n % 2);	
}

int main(void) {
	int num;
	printf("please enter a number:");
	scanf("%d", &num);
	divide(num);
	return 0;
}