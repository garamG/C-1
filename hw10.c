//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
////���� ������ ���ڿ� �ް� ���� ���� fgets
////south korea�� new york �Է¹��� �� korea�� ���� �Է¹��� ���ڿ�( 2��° ���� ����)�� �� 
//
//typedef struct city {
//	char name[20];
//	char country[20];
//	int population;
//}City;
//
//void show(City* ptr) {
//	printf("%s in %s with a population of %d people\n",ptr->name, ptr->country, ptr->population);
//}
//
//void ClearLineFromBuffer(void) {
//	while (getchar()!= '/n');
//}
//
//int main() {
//	City arr[3];
//	printf("Input three cities:\n");
//	char t_name[20];
//	char t_country[20];
//
//	for (int i = 0; i < 3; i++) {
//		//1, name
//		printf("Name>");
//		//scanf("%[^\n]s", arr[i].name);
//		fputs("Name>",stdout);
//		fgets(t_name,sizeof(t_name),stdin);
//		strcpy(arr[i].name, t_name);
//		ClearLineFromBuffer();
//		
//		
//		//2. ����
//		printf("Country>");
//		scanf("%[^\n]s", arr[i].country);
//		fputs("Country>",stdin);
//		fgets(t_country,sizeof(t_country),stdout);
//		strcpy(arr[i].country, t_country);
//		ClearLineFromBuffer();
//		
//
//		//3. �α� �� 
//		printf("Population>");
//		scanf("%d", &arr[i].population);
//	}
//
//	printf("\n");
//	printf("Printing the three cities:\n");
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d.", i+1);
//		show(&arr[i]);
//	}
//	return 0;
//}