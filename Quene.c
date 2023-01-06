#include "Quene.h";


void QueneInit(Quene* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}

void QueneDestroy(Quene* pq)
{
	assert(pq);
	QueneNode* cur = pq->head;

	while (cur)
	{
		QueneNode* next = cur ->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}

void QuenePop(Quene* pq)	
{
	assert(pq);
	assert(!QueneEmpty(pq)); // �ж�pq�Ƿ�Ϊ�գ����Ϊ�ղ��жϣ����������ֱ�ӱ�

	QueneNode* next = pq->head->next;
	free(pq->head);
	pq->head = next;
	if (pq->head == NULL)
	{
		pq->tail = NULL;
	}
}
	
void QuenePush(Quene* pq,QDataType x)
{
	assert(pq);

	QueneNode* newnode = (QueneNode*)malloc(sizeof(QueneNode));
	newnode->data = x;
	newnode->next = NULL;

	if (pq->head == NULL)
	{
		//pq->tail->next = new;
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}

QDataType QueneFront(Quene* pq)
{
	assert(pq);
	assert(!QueneEmpty(pq));

	return pq->head->data;
}

QDataType QueneBack(Quene* pq)
{
	assert(pq);
	assert(!QueneEmpty(pq));

	return pq->tail->data;
}

int QueneSize(Quene* pq)
{
	int num = 0;	// �ṹ��������size�������ֱ�ӷ���
	QueneNode* cur = pq->head;
	while (cur)
	{
		num++;
		cur = cur->next;
	}
	return num;
}
bool QueneEmpty(Quene* pq)
{
	assert(pq);
	return pq->head == NULL; // Ϊ�շ���True��
}