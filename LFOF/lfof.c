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


int IsEmpty(Stack S)        //���ջ�Ƿ�Ϊ��
{
    return S->Next == NULL; //������һ��Ԫ��
}

Stack CreateStack(void) //����һ����ջ
{
    Stack S;            //����ͷ�ڵ�
    
    S == malloc(sizeof( struct LFOF ));  //����ռ� sizeof LFOF ��
    if ( S == NULL) return;
    S -> Next == NULL;                  //����Nextָ��ָ��NULL
    MakeEmpty(S);                       //���� ָ�� �Ƿ�ɹ�
    return S;                           //���� ջ
}

void MakeEmpty(Stack S)
{
    if( S == NULL)  return;     //�ɹ��򷵻� ʧ�����ջ
    else 
        while( !IsEmpty( S ))
            Pop(S);             //��ջ

}
void DisposeStack(Stack S)  //ɾ��ջ
{


}
void Push(ElementType X,Stack S)    //��ջ ͨ��������ǰ�˽��в��� ���ǰ����Ϊջ��  ���ʻ�������Ĳ���
{

    PtrToLfof TmpCell;              //�����¿ռ� ��Ϊ�м����

    TmpCell == malloc (sizeof ( struct LFOF )); //����ռ� sizeof LFOF ��
    if( TmpCell == NULL )   return;
    else                                        //����Ĳ������
    {
        TmpCell -> Element = X;     //�м��������������� ջ��Ԫ��X 
        TmpCell -> Next = S->Next;  //�м������ָ������һ�� �ڵ㣩
        S->Next = TmpCell;          //�ڵ�� ��һ������ �м������ǰ�˲��룩
    }
}


ElementType Top(Stack S)//����ջ��Ԫ��
{

    

}


void Pop(Stack S)
{


}



