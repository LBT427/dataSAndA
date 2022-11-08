/*
 * @Author: LiuBT
 * @Date: 2022-05-10 21:52:23
 * @LastEditors: LiuBT
 * @LastEditTime: 2022-05-10 23:04:38
 * @FilePath: \Bubble_Sort\Bubble_Sort.c
 * @Description: 
 * 
 */
#include <stdio.h>
int main() {
	int nums[5] = { 5,4,3,2,1 };
	int  temp;
	printf("请输入五个数:");
	/*for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &nums[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d  ", nums[i]);
	}*/

	for (int i = 0; i < 5; i++) {
		char a = 1;
		for (int j = 0; j < 5 - 1 -i; j++)
		{
			if (nums[j] > nums[j + 1]) 
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
				a = 0;
			}
		}
        
		if (a)
		{
			break;
		}
	}

	//输出排序后的数组
	for (int i = 0; i < 5; i++) {
		printf("%d  ", nums[i]);
	}
	printf("\n");

	return 0;
}