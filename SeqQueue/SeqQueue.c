/*
 * @Author: liubotao
 * @Date: 2022-11-07 21:12:21
 * @LastEditors: liubotao
 * @LastEditTime: 2022-11-08 16:35:32
 * @FilePath: \data_structures_and_algorithms\SeqQueue\SeqQueue.c
 * @Description:
 *
 */
#include "SeqQueue.h"
#include "malloc.h"
#include "stdio.h"

int createQueue(FIFO *f, int fifoSize)
{
    f->data = (int*)malloc(fifoSize * sizeof(int));
    f->head = -1;
    f->tail = -1;
    f->size = fifoSize;
}

int deleteQueue(FIFO *f)
{

    free(f->data);
    f->data=0;
    f->head = -1;
    f->tail = -1;
    f->size = 0;

}


int enQueue(FIFO *f, int value)
{
    if (isFull(f))
    {
        return 0;
    }
    if (isEmpty(f))
    {
        f->head = 0;
    }
    f->tail = (f->tail + 1) % f->size;
    f->data[f->tail] = value;
    return 1;
}

int deQueue(FIFO *f)
{
    if (isEmpty(f))
    {
        return false;
    }
    if (f->head == f->tail)
    {
        f->head = -1;
        f->tail = -1;
        return true;
    }
    f->head = (f->head + 1) % f->size;
    return true;
}

int Front(FIFO *f)
{
    if (isEmpty(f))
    {
        return -1;
    }
    return f->data[f->head];
}
int Rear(FIFO *f)
{
    if (isEmpty(f))
    {
        return -1;
    }
    return f->data[f->tail];
}

int isEmpty(FIFO *f)
{
    return f->head == -1;
}

/** Checks whether the circular queue is full or not. */
int isFull(FIFO *f)
{
    return ((f->tail + 1) % f->size) == f->head;
}

void monitorQueue(FIFO *f)
{
    for (size_t i = 0; i < f->size; i++)
    {
        printf("%d\n",f->data[i]);
        
    }
}