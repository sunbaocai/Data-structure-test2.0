// Project3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <random>
int main(int argc, char* argv[])
{

	LinkedPoly La;
	InitPolyn(&La);
	int seedexp;
	int seedcoef;
	for (int i = 0; i < 10; i++)
	{	
		InsertPolyn(&La,i+1, i);
	}
	printf("此时多项式为:\nLa=");
	PrintPolyn(La);
	printf("La项数为%d\n", lenPolyn(La));
	LinkedPoly Lb;
	InitPolyn(&Lb);
	for (int j = 0; j < 10; j++)
	{
		seedexp = rand() % 10;//保证幂在0到十之间，同时也可以测试相同幂能否正确合并
		seedcoef = rand() % 100;
		printf("第%d次随机出的多项式为%dX^%d\n", j, seedcoef, seedexp);
		InsertPolyn(&Lb, seedcoef, seedexp);
	}
	printf("Lb=");
	PrintPolyn(Lb);
	LinkedPoly Lc;
	Lc = CalculatePolyn1(La, Lb, 1);
	printf("Lc=La+Lb=");
	PrintPolyn(Lc);
	Lc = CalculatePolyn1(La, Lb, -1);
	printf("Lc=La-Lb=");
	PrintPolyn(Lc);
	printf("-------------------------------------------------\n");
	printf("下面测试如果链表为空会怎么样:");
	Lc = CalculatePolyn1(La, La, -1);
	printf("链表的长度为%d", lenPolyn(Lc));


	return 0;


}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
