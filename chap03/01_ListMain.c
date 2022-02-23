#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ArrayList.h"

//����Ʈ�� �߻� �ڷ����� ������� ���ǵ� main�Լ�
int main(void)
{

	List list;
	int data;
	ListInit(&list); //�Լ�ȣ�� :: �ּڰ� ����

	//5 ���� ������ ����////////
	LInsert(&list, 11); LInsert(&list, 11);
	LInsert(&list, 22);	LInsert(&list, 22);
	LInsert(&list, 33);

	//����� �������� ��ü ��� ///////////
	printf("���� �������� �� : %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d* ", data);

		while (LNext(&list, &data))
			printf("%d/ ", data);
	}
	printf("\n\n");

	// ���� 22�� Ž���Ͽ� ��� ����////////

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

	// ���� �� ���� ������ ��ü ��� //////
	printf("���� �������� �� : %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d,,", data);

	}

	printf("\n\n");
	return 0;
}