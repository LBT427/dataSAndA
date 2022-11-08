/*** 
 * @Author: liubotao
 * @Date: 2022-11-07 21:12:26
 * @LastEditors: liubotao
 * @LastEditTime: 2022-11-08 16:35:51
 * @FilePath: \data_structures_and_algorithms\SeqQueue\SeqQueue.h
 * @Description: 
 * @
 */
#ifndef __SEQQUEUE_H
#define __SEQQUEUE_H

#define false 0
#define true  1



typedef struct SeqQueue
{
    int head;   //��ʾ���е���ʼλ��
    int tail;   //����λ��
    int size;   //��С

    int *data;
    
}FIFO;

int createQueue(FIFO *f, int fifoSize);     //��������
int deleteQueue(FIFO *f);     //��������
int enQueue(FIFO *f, int value);            //����
int deQueue(FIFO *f);                       //����
int Front(FIFO *f);                         //���ض�ͷ
int Rear(FIFO *f);                          //���ض�β
int isEmpty(FIFO *f);                       //�Ƿ�Ϊ��
int isFull(FIFO *f);                        //�Ƿ�Ϊ��


void monitorQueue();


#endif