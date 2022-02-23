#include <stdio.h>
#include "ArrayList.h"

void ListInit(List* plist)
{
	//리스트 초기화 
	(plist->numOFData) = 0;		//배열에 담긴 리스트의 값을 0으로 초기화한다.
	(plist->curPosition) = -1;
}

void LInsert(List* plist, LData data)
{
	if (plist->numOFData > LIST_LEN)
	{
		puts("저장이 불가눙");
		return;
	}
	plist->arr[plist->numOFData] = data;
	(plist->numOFData)++;
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->numOFData == 0)
		return FALSE;

	(plist->curPosition) = 0;
	*pdata = plist->arr[0];
	return TRUE;
}

int LNext(List* plist, LData* pdata)
{
	if (plist->curPosition >= (plist->numOFData) - 1)
		return FALSE;

	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

LData LRemove(List* plist)
{
	int rpos = plist->curPosition;
	int num = plist->numOFData;
	int i;
	LData rdata = plist->arr[rpos];

	for (i = rpos; i < num - 1; i++)
		plist->arr[i] = plist->arr[i + 1];


	(plist->numOFData)--;
	(plist->curPosition)--;

	return rdata;

}

int LCount(List* plist)
{
	return plist->numOFData;
}