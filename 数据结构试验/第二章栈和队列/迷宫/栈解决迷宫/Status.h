#pragma once
#include <stdio.h>
#include <stdlib.h> 					//�ṩsystem��rand��srandԭ�� 
#include <time.h>	
/* ״̬�� */
#define	TRUE		1			//�� 
#define	FALSE		0			//��
#define YES			1			//��
#define NO          0			//�� 
#define	OK			1			//ͨ��
#define	ERROR		0			//����
#define SUCCESS		1			//�ɹ� 
#define UNSUCCESS	0			//ʧ�� 
#define	INFEASIBLE	-1			//������
/* ״̬��ʶ������ */
typedef int Status;

#ifndef _MATH_H_ 				//ϵͳ�����д�״̬�붨�壬Ҫ�����ͻ 
#define	OVERFLOW	-2			//��ջ����
#define UNDERFLOW	-3			//��ջ����
typedef struct							//ͨ������Ϣ 
{
	int		ord;						//ͨ����ġ���š� 
	PosType seat;						//ͨ����ġ�����λ�á� 
	int		di;							//��һ���÷��ʵġ����� 
}SElemType_Sq;
#endif 