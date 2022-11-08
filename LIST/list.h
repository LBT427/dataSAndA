/*
 * @Author: LiuBT
 * @Date: 2022-04-25 16:41:22
 * @LastEditors: LiuBT
 * @LastEditTime: 2022-04-25 18:58:01
 * @FilePath: \data_structures_and_algorithms\LIST\list.h
 * @Description: 
 * 
 */
// This program illustrates the creation || of linked lists.

struct ListNode
{
    double value;
    ListNode *next;
     ListNode()
    {
        value = 0;
        next = NULL;
    }
     ListNode(double valuel, ListNode *nextl = NULL)
    {
        value = valuel;
        next = nextl;
    }
};
class list
{
private:
    /* data */
public:
    int traverse(ListNode *numberList);
    list(/* args */);
    ~list();
};

list::list(/* args */)
{
}

list::~list()
{
}







