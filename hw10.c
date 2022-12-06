//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
////공백 포함한 문자열 받고 싶을 때는 fgets
////south korea와 new york 입력받을 때 korea가 다음 입력받을 문자열( 2번째 도시 변수)에 들어감 
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
//		//2. 나라
//		printf("Country>");
//		scanf("%[^\n]s", arr[i].country);
//		fputs("Country>",stdin);
//		fgets(t_country,sizeof(t_country),stdout);
//		strcpy(arr[i].country, t_country);
//		ClearLineFromBuffer();
//		
//
//		//3. 인구 수 
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