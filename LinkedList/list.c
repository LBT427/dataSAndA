/*
 * @Author: liubotao
 * @Date: 2022-10-12 22:52:25
 * @LastEditors: liubotao
 * @LastEditTime: 2022-10-13 16:22:09
 * @FilePath: \data_structures_and_algorithms\LinkedList\list.c
 * @Description: 
 * 
 */
#include "stdio.h"
#include "list.h"


List MarkEmpty(List L)
{
    
    
}
int IsEmpty(List L)//测试链表是否为空
{
    return L ->Next == NULL; 
}
int IsLast(Position P , List L)//测试当前位置是否为链表的末尾
{
    return P->Next ==NULL;
}
Position Find(ElementType X,List L)//查找元素在表中的位置 Position 是一个Node类型的指针
{
    Position P;
    P = L ->Next;                       //指针P 指向 表L的下一个元素
    while ( P!= NULL&& P->Element != X) //如果非空 且 没找到元素X 则 继续遍历
        P = P->Next;
    return P;                           //返回要找的元素  
}
Position FindPrevious(ElementType X,List L)//找到并返回含有X的表元的前驱元P
{
    Position P;
    P = L;//指针P 指向 表L
    while ( P->Next != NULL && P->Next->Element != X)//如果 下一个元素非空 且 没找到下一个元素X 则 继续遍历
        P = P->Next;
    return P;//返回要找的元素  
}
void Delete(ElementType X,List L)//删除表中的元素 X
{
    Position P,TmpCell;     //P为前驱元素 TmpCell为中间节点 

    P = FindPrevious( X,L); //找到表L中 X的前驱元
    if (!IsLast(P,L))       //如果P不是最后一个元素则删除P后面的元素（X）
    {
        TmpCell = P->Next;          //中间节点 等于 下一个（X）
        P->Next = TmpCell->Next;    // 下一个（X）等于 下下个（X的下一个）
        free( TmpCell );            //释放 TmpCell（删除元素X所在的节点）
    }
    
}
unsigned int Insert (ElementType X,List L,Position P)//链表插入
{
    Position TmpCell;
    TmpCell = malloc(sizeof(struct Node));
    if (TmpCell==NULL)
        return -1;

    TmpCell->Element = X;   //把元素X装入临时节点TmpCell  
    TmpCell->Next = P->Next;//TmpCell的下一个节点为 P的下一个节点
    P->Next = TmpCell;      //P的下一个节点 为 TmpCell
}
void DeleteList(List L)//删除整个链表
{
    Position P, Tmp;
    P = L->Next;
    L->Next = NULL;
    while (P != NULL)
    {
        Tmp = P->Next;
        ftee( P );
        P = Tmp;
    }
    

    
}
Position Header(List L)
{

    
}
Position First(List L)
{

    
}
Position Advance(Position P)
{

    
}
ElementType Retrieve(Position P)
{

    
}
