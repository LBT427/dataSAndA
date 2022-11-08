/*
 * @Author: LiuBT
 * @Date: 2022-04-25 16:41:06
 * @LastEditors: LiuBT
 * @LastEditTime: 2022-04-25 19:16:03
 * @FilePath: \data_structures_and_algorithms\LIST\list.cpp
 * @Description: 
 * 
 */
#include <iostream>
#include "list.h"
using namespace std;
int traverse(ListNode *numberList)
{
    ListNode *ptr = numberList;
    while (ptr != NULL)
    {
        cout << ptr->value << endl; //处理结点（显示结点内容）
        ptr = ptr->next;           //移动到下一个结点
    }
}
int test01()
{
    ListNode *head = NULL;
    // Create first node with 12.5
    head = new ListNode; // Allocate new node
    head->value = 12.5;    // Store the value
    head->next = NULL; // Signify end of list
    // Create second node with 13.5
    ListNode *secondPtr = new ListNode;
    secondPtr->value = 13.5;
    secondPtr->next = NULL; // Second node is end of list
    head->next = secondPtr; // First node points to second
    // Print the list
    cout << "First item is " << head->value << endl;
    cout << "Second item is " << head->next->value << endl;

    return 0;
}

int test02()
{
    ListNode *head = new ListNode(13.5);
    head = new ListNode(12.5, head);
    traverse(head);

    // cout << "First item is " << head->value << endl;
    // cout << "Second item is " << head->next->value << endl;
}

int main()
{
    //test01();
    test02();
    return 0;
}

