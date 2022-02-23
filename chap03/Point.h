#pragma once
#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point
{
	int xpos;
	int ypos;
}Point;

// point ������ zpos, ypos �� ����
void SetPointPos(Point* ppos, int xpos, int ypos);

//Point ������ zpos, ypos ���� ���
void ShowPointPos(Point* ppos);

//�� Point ������ ��
int PointComp(Point* pos1, Point* pos2);

#endif