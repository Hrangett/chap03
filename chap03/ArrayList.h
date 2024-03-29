#pragma once
#include "Point.h"
#ifndef __ARRAY_LIST_H__	// ** 만약 __ARRAY_LIST_H__rk 가 define되지 않았으면
#define __ARRAY_LIST_H__	// ** __ARRAY_LIST_H__를 define해라

#define TRUE 1		// '참'을 표현하기 위한 메크로 정의
#define FALSE 0		// '거짓'을 표현하기 위한 메크로 정의

#define LIST_LEN 100 

typedef Point * LData;	// LData에 대한 typedef선언


typedef struct __ArrayList	// 배열기반 리스트를 정의한 구조체
{
	LData arr[LIST_LEN];	// 리스트의 저장장소인 배열
	int numOFData;			// 저장된 데이터의 수
	int curPosition;		// 데이터 참조위치를 기록
}ArrayList;

typedef ArrayList List; 

void ListInit(List* plist);						// 초기화	
void LInsert(List* plist, LData pdata);		// 데이터 저장

int LFirst(List* plist, LData* pdata);			// 첫 데이터 참조
int LNext(List* plist, LData* pdata);			// 두번째 이후 데이터 참조

LData LRemove(List* plist);						// 참조한 데이터 삭제
int LCount(List* plist);						// 저장된 데이터의 수 반환

#endif							// ** 그렇지 않다면,,