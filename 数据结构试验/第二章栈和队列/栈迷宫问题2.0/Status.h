#pragma once


/*
 * 
 * �����⣬��ÿ��ʵ�鶼������
 */

#ifndef STATUS_H
#define STATUS_H

#include <stdio.h>

 /* ״̬�� */
#define TRUE        1   // ��/��
#define FALSE       0   // ��/��
#define OK          1   // ͨ��/�ɹ�
#define ERROR       0   // ����/ʧ��

//ϵͳ�����д�״̬�붨�壬Ҫ��ֹ��ͻ
#ifndef OVERFLOW
#define OVERFLOW    -2  //��ջ����
#endif

//ϵͳ�����д�״̬�붨�壬Ҫ��ֹ��ͻ
#ifndef NULL
#define NULL ((void*)0)
#endif

/* ״̬������ */
typedef int Status;

/* �������� */
typedef int Boolean;


/* ȫ�ֱ���*/
extern Boolean debug;   // �Ƿ�ʹ��debugģʽ

#endif
