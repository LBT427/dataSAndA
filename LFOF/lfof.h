/*** 
 * @Author: liubotao
 * @Date: 2022-10-30 08:56:17
 * @LastEditors: liubotao
 * @LastEditTime: 2022-10-30 09:52:00
 * @FilePath: \data_structures_and_algorithms\LFOF\lfof.h
 * @Description: 
 * @
 */
#ifndef __LFOF_H
#define __LFOF_H

typedef int ElementType;


struct LFOF;                    //
typedef struct LFOF *PtrToLfof; //结构体指针
typedef PtrToLfof Stack;        //

int IsEmpty(Stack S);           //测试是否为空
Stack CreateStack(void);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X,Stack S);
ElementType Top(Stack S);
void Pop(Stack S);



struct LFOF
{
   ElementType  Element;
   PtrToLfof    Next;

};



#endif