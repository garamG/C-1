#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, and, or , xor;
	printf("Input two integers:");
	scanf("%d %d", &a, &b);
	and = a & b;
	or = a | b;
	xor = a ^ b;
	printf("%d & %d=%d\n", a, b, and);
	printf("%d | %d=%d\n", a, b, or );
	printf("%d ^ %d=%d\n", a, b, xor);
	return 0;
}