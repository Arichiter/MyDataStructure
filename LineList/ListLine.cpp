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

/* 初始化例程 */
void InitList(List L)   
{
	Position Header;  //创建头指针

	L = (List)malloc(sizeof(List));
	Header = L;
	
}
Position Insert(Elemtype X, List L, Position P);  //插入一个节点例程
Position Find(Elemtype, List L);      //寻找例程
void Delet(Elemtype X, List L);       //删除例程

/* 判断L链表是不是空链表 */
int IsEmpty(List L)
{
	return L == NULL;
}
int IsLast(Position P, List L);       //判断节点P是不是尾节点