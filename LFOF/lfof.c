/*
 * @Author: liubotao
 * @Date: 2022-10-30 08:56:11
 * @LastEditors: liubotao
 * @LastEditTime: 2022-10-30 10:02:05
 * @FilePath: \data_structures_and_algorithms\LFOF\lfof.c
 * @Description: 
 * 
 */
#include <stdio.h>
#include <malloc.h>
#include "lfof.h"


int IsEmpty(Stack S)        //检测栈是否为空
{
    return S->Next == NULL; //返回下一个元素
}

Stack CreateStack(void) //创建一个空栈
{
    Stack S;            //创建头节点
    
    S == malloc(sizeof( struct LFOF ));  //分配空间 sizeof LFOF 个
    if ( S == NULL) return;
    S -> Next == NULL;                  //设置Next指针指向NULL
    MakeEmpty(S);                       //测试 指向 是否成功
    return S;                           //返回 栈
}

void MakeEmpty(Stack S)
{
    if( S == NULL)  return;     //成功则返回 失败则出栈
    else 
        while( !IsEmpty( S ))
            Pop(S);             //出栈

}
void DisposeStack(Stack S)  //删除栈
{


}
void Push(ElementType X,Stack S)    //进栈 通过向链表前端进行插入 表的前端作为栈顶  本质还是链表的操作
{

    PtrToLfof TmpCell;              //开辟新空间 作为中间变量

    TmpCell == malloc (sizeof ( struct LFOF )); //分配空间 sizeof LFOF 个
    if( TmpCell == NULL )   return;
    else                                        //链表的插入操作
    {
        TmpCell -> Element = X;     //中间变量的数据域等于 栈新元素X 
        TmpCell -> Next = S->Next;  //中间变量的指针域（下一个 节点）
        S->Next = TmpCell;          //节点的 下一个等于 中间变量（前端插入）
    }
}


ElementType Top(Stack S)//返回栈顶元素
{

    

}


void Pop(Stack S)
{


}



