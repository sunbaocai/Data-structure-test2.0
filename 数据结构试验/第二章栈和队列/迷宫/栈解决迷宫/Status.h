#pragma once
#include <stdio.h>
#include <stdlib.h> 					//提供system、rand、srand原型 
#include <time.h>	
/* 状态码 */
#define	TRUE		1			//真 
#define	FALSE		0			//假
#define YES			1			//是
#define NO          0			//否 
#define	OK			1			//通过
#define	ERROR		0			//错误
#define SUCCESS		1			//成功 
#define UNSUCCESS	0			//失败 
#define	INFEASIBLE	-1			//不可行
/* 状态码识别类型 */
typedef int Status;

#ifndef _MATH_H_ 				//系统中已有此状态码定义，要避免冲突 
#define	OVERFLOW	-2			//堆栈上溢
#define UNDERFLOW	-3			//堆栈下溢
typedef struct							//通道块信息 
{
	int		ord;						//通道块的“序号” 
	PosType seat;						//通道块的“坐标位置” 
	int		di;							//下一个该访问的“方向” 
}SElemType_Sq;
#endif 