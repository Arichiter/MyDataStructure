#include "_List_H.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
	List Number = NULL;
	InitList(Number);
	printf("%d", IsEmpty(Number));
	return 0;
}

/* ��ʼ������ */
void InitList(List L)   
{
	Position Header;  //����ͷָ��

	L = (List)malloc(sizeof(List));
	Header = L;
	
}
Position Insert(Elemtype X, List L, Position P);  //����һ���ڵ�����
Position Find(Elemtype, List L);      //Ѱ������
void Delet(Elemtype X, List L);       //ɾ������

/* �ж�L�����ǲ��ǿ����� */
int IsEmpty(List L)
{
	return L == NULL;
}
int IsLast(Position P, List L);       //�жϽڵ�P�ǲ���β�ڵ�