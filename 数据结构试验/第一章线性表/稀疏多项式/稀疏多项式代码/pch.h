// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头
#pragma once
/*
ADT Polynomial {
数据对象：
D＝{ ai | ai ∈TermSet, i=1,2,...,m, m≥0
TermSet 中的每个元素包含一个表示
系数的实数和表示指数的整数 }
数据关系：
R1＝{ <ai-1 ,ai >|ai-1 ,ai∈D,
且ai-1中的指数值＜ai中的指数值 i=2,...,n}


PolynLength( P )
初始条件：一元多项式 P 已存在。
操作结果：返回一元多项式 P 中的项数。
AddPolyn ( &Pa, &Pb )

初始条件：一元多项式 Pa 和 Pb 已存在。
操作结果：完成多项式相加运算，即：
Pa = Pa＋Pb，并销毁一元多项式 Pb。
SubtractPolyn ( &Pa, &Pb )

… …
MultiplyPolyn(&Pa, &Pb )
… …
} ADT Polynomial


*/




#include<stdio.h>
#include<math.h>//提供pow原型
#include<stdlib.h>//提供malloc，free等函数原型

/* 状态码 */
#define TRUE        1   // 真/是
#define FALSE       0   // 假/否
#define OK          1   // 通过/成功
#define ERROR       0   // 错误/失败

/* 状态码类型 */
typedef int Status;

/* 布尔类型 */
typedef int Boolean;


/* 类型定义 */
typedef struct						//稀疏多项式链式结构
{
	int coef;						//系数 
	int exp;						//指数 
}PolyTerm;
typedef struct PolyNode
{
	PolyTerm data;
	struct PolyNode* next;
}PolyNode;
typedef PolyNode* PolyLink;
typedef PolyLink LinkedPoly;

//初始化
Status InitPolyn(LinkedPoly* L);

//初始条件：一元多项式 P 已存在。
//操作结果：销毁一元多项式 P。
Status DestroyPolyn(LinkedPoly* L);

//操作结果：输入 m 项的系数和指数，插入一元多项式 L末尾。
//可以选择插入末尾，也可以选择比较顺序后再插入相应的位置以保持有序性，这里选择头插法
//可以选择传递一个结构数组进行批量添加，但这样又需要建立动态数组了
//如果后续再排序，所要进行的排序算法更加麻烦，而且插入的项可能已经存在，这样无法合并，所以还是插入式排序比较好，同时可以将相同项的合并
Status InsertPolyn(LinkedPoly* L, int coef, int exp);

//初始条件：一元多项式 P 已存在。
//操作结果：打印输出一元多项式 P。
Status PrintPolyn(LinkedPoly L);

//对多项式进行排序,n为1表示从小到大排序，为0表示从大到小，默认n=1XXXc语言限制不能在函数定义和函数声明中同时指定默认参数
//改为将多项式翻转为由大到小排列，原排序在插入中就已经完成
Status ReverseSortPolyn(LinkedPoly* L);

//对多项式进行相加或相减，n为1或-1代表是加还是-
Status CalculatePolyn(LinkedPoly La, LinkedPoly Lb, LinkedPoly* Lc);

//返回多项式的长度，共有多少项
Status lenPolyn(LinkedPoly L);
#endif //PCH_H
