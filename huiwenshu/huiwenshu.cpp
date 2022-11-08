/*
 * @Author: LiuBT
 * @Date: 2022-04-25 14:05:34
 * @LastEditors: LiuBT
 * @LastEditTime: 2022-04-25 15:06:24
 * @FilePath: \data_structures_and_algorithms\huiwenshu\huiwenshu.cpp
 * @Description: 
 * 
 */

/*
判断一个数是否是回文数.

给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
例如，121 是回文，而 123 不是。
*/

#include <iostream>

class Solution
{
public:
    bool isPalindrome(int x);
    
};

 bool Solution:: isPalindrome(int x)//双指针
{
    
        if (x < 0)
        {
            return false;
        }
        int div = 1;
        while (x / div >= 10)//获取整数的位数cnt
        {
            div *= 10;
        }
        while (x != 0)
        {
            int left = x / div;//左边数
            int right = x % 10;//右边数
            if (left != right)
            {
                return false;
            }
            x = (x % div) / 10;//去掉最右边的数
            div /= 100;//
        }
        return true;
    


}
int main()
{
    Solution s;
    std::cout << s.isPalindrome(231) << std::endl;
    return 0;
}

