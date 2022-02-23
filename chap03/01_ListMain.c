#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ArrayList.h"

//리스트의 추상 자료형을 기반으로 정의된 main함수
int main(void)
{

	List list;
	int data;
	ListInit(&list); //함수호출 :: 주솟값 전달

	//5 개의 데이터 저장////////
	LInsert(&list, 11); LInsert(&list, 11);
	LInsert(&list, 22);	LInsert(&list, 22);
	LInsert(&list, 33);

	//저장된 ㅔ이터의 전체 출력 ///////////
	printf("현재 데이터의 수 : %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d* ", data);

		while (LNext(&list, &data))
			printf("%d/ ", data);
	}
	printf("\n\n");

	// 숫자 22을 탐색하여 모두 삭제////////

	if (LFirst(&list, &data))
	{
		if (data == 22)
			LRemove(&list);

		while (LNext(&list, &data))
		{
			if (data == 22)
				LRemove(&list);
		}
	}

	// 삭제 후 남은 데이터 전체 출력 //////
	printf("현재 데이터의 수 : %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d,,", data);

	}

	printf("\n\n");
	return 0;
}