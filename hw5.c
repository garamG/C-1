#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//for문의 규칙 이해하기 
	//for (int i = 1; i < 100; i++) {
	//	if (i % 7 == 0 || i % 9 == 0) {
	//		printf("%d\n", i);
	//	}
	//}

	/*int kor, eng, math;
	double avg = 0;
	scanf("%d %d %d", &kor, &eng, &math);
	avg = (kor + eng + math) / 3;

	if (avg >= 90) {
		printf("A");
	}
	else if (avg >= 80) {
		printf("B");
	}
	else if (avg >= 70) {
		printf("C");
	}
	else if (avg >= 50) {
		printf("D");
	}
	else { print("F"); }*/

	//16 continue : 2의 배수와 3의 배수 걸러진 나머지 수가 출력된다 

		//2단이 이면 2까지 계산, 4단이면 4까지 
		/*for (int i = 2; i < 10; i+=2) {
			printf("%d단\n", i);
			for (int j = 1; j <= i; j++) {
				printf("%d*%d=%d\n", i, j, i * j);
			}
			printf("\n");
		}*/

		//A와 Z는 보수 관계
		/*int z;
		for (int a = 0; a < 10; a++) {
			z = 10 - a-1;
			printf(" %d%d\n+%d%d\n---\n %d%d\n\n", a, z, z, a,a+z,a+z);
		}*/

		//switch문 사용해보기 예제 
		/*int n;
		printf("1이상 5이하의 정수 입력:");
		scanf("%d", &n);

		switch (n)
		{
		case1:
			printf("one\n");
			break;

		case2:
			printf("two\n");
			break;

		case3:
			printf("three\n");
			break;

		case4:
			printf("four\n");
			break;

		case5:
			printf("five\n");
			break;

		default:
			printf("i don't know!\n");
		}*/

		/*char sel;
		printf("M 오전, A오후, E 저녁 \n");
		printf("입력:");
		scanf("%c", &sel);

		switch (sel) {
		case 'M':
		case'm':
			printf("morning \n");
			break;

		case 'A':
		case'a':
			printf("afternoon\n");
			break;

		case 'E':
		case'e':
			printf("evening \n");
			break;
		}*/
//	int n;
//	scanf("%d", &n);
//
//	switch (n / 10) {
//		case 0:
//			printf("0이상 10미만");
//			break;
//		case 1:
//			printf("10이상 20미만");
//			break;
//		case 2:
//			printf("20이상 30미만");
//			break;
//		default:
//			printf("30이상 ");
//			break;
//}

//소수 구하기

int num;
printf("please enter a number:");
scanf("%d", &num); 
int count=0; 

for (int i = 2; i < num; i++) {
	if (num % i == 0) {
		printf("it is not a prime number");
		break;
	}
	else { printf("it is a prime number\n"); }
	
}
	return 0;
}