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
    int head;   //表示队列的起始位置
    int tail;   //结束位置
    int size;   //大小

    int *data;
    
}FIFO;

int createQueue(FIFO *f, int fifoSize);     //创建队列
int deleteQueue(FIFO *f);     //创建队列
int enQueue(FIFO *f, int value);            //入列
int deQueue(FIFO *f);                       //出列
int Front(FIFO *f);                         //返回队头
int Rear(FIFO *f);                          //返回队尾
int isEmpty(FIFO *f);                       //是否为空
int isFull(FIFO *f);                        //是否为满


void monitorQueue();


#endif