#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//arr �迭�� Ȧ���� ����� ¦���� arr2 �迭�� �ű�� �ʹ�. 

int main() {
	int arr[5]; // 3,7,10,15,18
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	//�迭 ���� ���ϴ� �Լ�
	int len = sizeof(arr) / sizeof(arr[0]);
	int arr2[5]; //¦�� ���� ���� �迭 
	int idx_even = 0;

	for (int i = 0; i <5; i++) {
		if (arr[i] % 2 == 0) {
		//¦�� �迭 arr2�� ��� ù ��° ĭ���� ����? 
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
