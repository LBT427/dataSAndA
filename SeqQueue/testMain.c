/*
 * @Author: liubotao
 * @Date: 2022-11-08 15:58:41
 * @LastEditors: liubotao
 * @LastEditTime: 2022-11-08 19:41:40
 * @FilePath: \data_structures_and_algorithms\SeqQueue\testMain.c
 * @Description: 
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include "seqQueue.h"


FIFO f;

int main ()
{                       
    createQueue(&f, 5);     //创建队列
    enQueue(&f, 100);            //入列
    enQueue(&f, 20);            //入列
    //monitorQueue(&f);
    //printf("%d\n",Front(&f));
    // deQueue(&f);
    // printf("%d\n",Front(&f));
    // deQueue(&f);
    // deQueue(&f);
    // printf("%d\n",Front(&f));
    deleteQueue(&f);
    monitorQueue(&f);
    system("pause");

}
