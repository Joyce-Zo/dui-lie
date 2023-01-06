#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>;
typedef int QDataType;
typedef struct QueneNode
{
	struct QueneNode* next;
	QDataType data;
}QueneNode;

typedef struct Quene
{
	QueneNode* head;
	QueneNode* tail;
}Quene;

void QueneInit(Quene* pq);
void QueneDestroy(Quene* pq);
void QuenePush(Quene* pq, QDataType x);
void QuenePop(Quene* pq);
void QuenePrint(Quene pq);

QDataType QueneFront(Quene* pq); // ȡ��ͷ������
QDataType QueneBack(Quene* pq);  // ȡ��β������

int QueneSize(Quene* pq); // �������ݵĸ���
bool QueneEmpty(Quene* pq);