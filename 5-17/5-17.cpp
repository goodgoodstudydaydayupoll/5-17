#include<stdio.h>
#define MaxSize 50
typedef int ElemType;

typedef struct
{
	ElemType data[MaxSize];
	int length;
}SqList;
bool ListInsert(SqList& L, int x, ElemType e)
{
	if (x<1||x > L.length+1)
		return false;
	if (L.length >= MaxSize)
		return false;
	for (int j = L.length; j >= x; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	    L.data[x] = e;
		L.length++;
		return true;
}
void PrintList(SqList &L)
{
	for (int i = 0; i <= L.length; i++)
	{
		printf("%4d", L.data[i]);
	}
	printf("\n");
}
int main()
{
	SqList L;
	bool ret;
	ElemType del;
	L.data[0] = 0;
	L.data[1] = 1;
	L.data[2] = 2;
	L.length = 3;
	ret=ListInsert(L, 2, 60);
	if (ret)
	{
		printf("³É¹¦\n");
		PrintList(L);
	}
	else
	{
		printf("Ê§°Ü\n");

	}
	return 0;
}