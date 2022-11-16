#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

void standard_D(double arr[], int len) {
	double SD = 0.0;
	double total = 0.0;
	double avg = 0.0;
	double sum = 0.0;

	//Æò±Õ ±¸ÇÏ±â
	for (int i = 0; i < len; i++) {
		total += arr[i];
		avg = total / len;
	}

	for (int i = 0; i < len; i++) {
		sum += pow(arr[i] - avg, 2.0);
	}

	SD=sqrt(sum / len);

	printf("Standard Deviation=%.3lf",SD);
}
int main() {
	double arr[5];
	printf("Enter 5 real numbers:");
	for (int i = 0; i < 5; i++) {
		scanf("%lf", &arr[i]);
	}
	
	standard_D(arr,5);
	return 0; 
}
