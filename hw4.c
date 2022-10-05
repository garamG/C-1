#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
int num;
printf("please enter a number:");
scanf("%d", &num); 
int count=0; 

for (int i = 2; i < num; i++) {
	if (num % i == 0) {
		printf("it is not a prime number");
		break;
	}
	else { printf("it is a prime number\n");
	     break;
	     }
	
}
	return 0;
}
