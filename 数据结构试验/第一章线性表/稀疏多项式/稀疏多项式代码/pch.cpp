// pch.cpp: 与预编译标头对应的源文件

#include "pch.h"
#include<random>
Status InitPolyn(LinkedPoly* L)
{
	*L = (LinkedPoly)malloc(sizeof(PolyNode));
	if (!(*L))
		exit(OVERFLOW);
	(*L)->next = NULL;
	(*L)->data.coef = 0;//头结点的coef储存有多少项而不是项的常数项
	return OK;
}

Status InsertPolyn(LinkedPoly* L, int coef, int exp)
{
	if (!(*L))// coef==0 如果输入常数项为0 （seed可能随机出0）放着就中断了
		exit(OVERFLOW);
	if (coef == 0)//如果常数项为0
		return OK;//不做任何操作
	LinkedPoly p, q;
	p = (LinkedPoly)malloc(sizeof(PolyNode));
	if (!p)
		exit(OVERFLOW);
	q = (*L);
	p->data.coef = coef;
	p->data.exp = exp;
	if (exp == 0)//如果是一个常数项
	{
		;//这里可以不管，在输入中改
	}
	//暂时未解决，常数项
	while (q->next != NULL)
	{
		if (exp == q->next->data.exp)
		{
			q->next->data.coef += coef;
			if (q->next->data.coef == 0)
			{
				(*L)->data.coef -= 1;//可能存在项数变为0 的情况，先不管
				LinkedPoly s = q->next;
				q->next = s->next;
				free(s);				
			}
			break;//一开始把这个放在第二个if里面，导致不能break，我裂开了
		}
		if (exp < q->next->data.exp)
		{
			p->next = q->next;
			q->next = p;
			(*L)->data.coef += 1;
			break;
		}
		q = q->next;

	}
	//一开始没设置这个，导致无法写入
	if (q->next == NULL)
	{
		p->next = q->next;
		q->next = p;
		(*L)->data.coef += 1;
	}
	return OK;
}

Status PrintPolyn(LinkedPoly L)
{
	if (!L || !L->next)//如果L不存在或者为空表
		exit(OVERFLOW);
	LinkedPoly p;
	p = L->next;
	while (p != NULL)
	{
		printf("%d", p->data.coef);
		if(p->data.exp)
		printf("x^%d", p->data.exp);
		p = p->next;
		if (p != NULL)//如果后面还有多项式，打印+号
		{
			printf("+");
		}
	}
	printf("\n");
	return OK;
}

Status ReverseSortPolyn(LinkedPoly* L)
{
	if (!L || (*L)->next)//如果L不存在或者为空表
		exit(OVERFLOW);
	return OK;
}

Status lenPolyn(LinkedPoly L)
{
	if (!L || !(L)->next)//如果L不存在或者为空表
		exit(OVERFLOW);
	return L->data.coef;
}
// 当使用预编译的头时，需要使用此源文件，编译才能成功。
