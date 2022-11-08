/*** 
 * @Author: liubotao
 * @Date: 2022-10-12 22:52:34
 * @LastEditors: liubotao
 * @LastEditTime: 2022-10-30 10:31:21
 * @FilePath: \data_structures_and_algorithms\LinkedList\list.h
 * @Description: 
 * @
 */
#ifndef __LIST_H
#define __LIST_H

typedef int ElementType;

struct Node;
typedef struct Node  *PtrToNode;//PtrToNode为一个
typedef PtrToNode List;         //表
typedef PtrToNode Position;     //位置
List MarkEmpty(List L);
int IsEmpty(List L);
int IsLast(List L);
Position Find(ElementType X,List L);
void Delete(ElementType X,List L);
Position FindPrevious(ElementType x,List L);
unsigned int Insert (ElementType X,List L,Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);

struct Node 
{
    ElementType Element;
    Position Next;
};


#endif




