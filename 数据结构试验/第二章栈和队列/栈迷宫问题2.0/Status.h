#pragma once


/*
 * 
 * 公共库，在每个实验都可引用
 */

#ifndef STATUS_H
#define STATUS_H

#include <stdio.h>

 /* 状态码 */
#define TRUE        1   // 真/是
#define FALSE       0   // 假/否
#define OK          1   // 通过/成功
#define ERROR       0   // 错误/失败

//系统中已有此状态码定义，要防止冲突
#ifndef OVERFLOW
#define OVERFLOW    -2  //堆栈上溢
#endif

//系统中已有此状态码定义，要防止冲突
#ifndef NULL
#define NULL ((void*)0)
#endif

/* 状态码类型 */
typedef int Status;

/* 布尔类型 */
typedef int Boolean;


/* 全局变量*/
extern Boolean debug;   // 是否使用debug模式

#endif
