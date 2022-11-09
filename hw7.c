#include <stdio.h>
//그 안에 있는 값을 변경할 때는 *를 붙인다 

int main() {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");

	int* ptr1 = arr1;
	int* ptr2 = arr2;
	int temp = 0;
	for (int i = 0; i < 6; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2++;

	}
	printf("\n");
	printf("after swap\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	
	return 0;
}