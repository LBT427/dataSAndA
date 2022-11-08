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
int IsEmpty(List L)//���������Ƿ�Ϊ��
{
    return L ->Next == NULL; 
}
int IsLast(Position P , List L)//���Ե�ǰλ���Ƿ�Ϊ�����ĩβ
{
    return P->Next ==NULL;
}
Position Find(ElementType X,List L)//����Ԫ���ڱ��е�λ�� Position ��һ��Node���͵�ָ��
{
    Position P;
    P = L ->Next;                       //ָ��P ָ�� ��L����һ��Ԫ��
    while ( P!= NULL&& P->Element != X) //����ǿ� �� û�ҵ�Ԫ��X �� ��������
        P = P->Next;
    return P;                           //����Ҫ�ҵ�Ԫ��  
}
Position FindPrevious(ElementType X,List L)//�ҵ������غ���X�ı�Ԫ��ǰ��ԪP
{
    Position P;
    P = L;//ָ��P ָ�� ��L
    while ( P->Next != NULL && P->Next->Element != X)//��� ��һ��Ԫ�طǿ� �� û�ҵ���һ��Ԫ��X �� ��������
        P = P->Next;
    return P;//����Ҫ�ҵ�Ԫ��  
}
void Delete(ElementType X,List L)//ɾ�����е�Ԫ�� X
{
    Position P,TmpCell;     //PΪǰ��Ԫ�� TmpCellΪ�м�ڵ� 

    P = FindPrevious( X,L); //�ҵ���L�� X��ǰ��Ԫ
    if (!IsLast(P,L))       //���P�������һ��Ԫ����ɾ��P�����Ԫ�أ�X��
    {
        TmpCell = P->Next;          //�м�ڵ� ���� ��һ����X��
        P->Next = TmpCell->Next;    // ��һ����X������ ���¸���X����һ����
        free( TmpCell );            //�ͷ� TmpCell��ɾ��Ԫ��X���ڵĽڵ㣩
    }
    
}
unsigned int Insert (ElementType X,List L,Position P)//�������
{
    Position TmpCell;
    TmpCell = malloc(sizeof(struct Node));
    if (TmpCell==NULL)
        return -1;

    TmpCell->Element = X;   //��Ԫ��Xװ����ʱ�ڵ�TmpCell  
    TmpCell->Next = P->Next;//TmpCell����һ���ڵ�Ϊ P����һ���ڵ�
    P->Next = TmpCell;      //P����һ���ڵ� Ϊ TmpCell
}
void DeleteList(List L)//ɾ����������
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
