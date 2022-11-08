#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//arr 배열에 홀수만 남기고 짝수를 arr2 배열로 옮기고 싶다. 

int main() {
	int arr[5]; // 3,7,10,15,18
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	//배열 길이 구하는 함수
	int len = sizeof(arr) / sizeof(arr[0]);
	int arr2[5]; //짝수 숫자 담을 배열 
	int idx_even = 0;

	for (int i = 0; i <5; i++) {
		if (arr[i] % 2 == 0) {
		//짝수 배열 arr2에 어떻게 첫 번째 칸부터 넣지? 
			arr2[i] = arr[i];
			arr[i] = 0;	
		}
		else { arr2[i] = 0; }
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] != 0) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		if (arr2[i] != 0) {
			printf("%d ", arr2[i]);
		}
	}

	return 0;
	}
