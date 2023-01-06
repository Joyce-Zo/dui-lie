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

QDataType QueneFront(Quene* pq); // 取队头的数据
QDataType QueneBack(Quene* pq);  // 取队尾的数据

int QueneSize(Quene* pq); // 返回数据的个数
bool QueneEmpty(Quene* pq);