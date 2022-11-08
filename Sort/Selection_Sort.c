/*
 * @Author: LiuBT
 * @Date: 2022-05-10 23:25:42
 * @LastEditors: LiuBT
 * @LastEditTime: 2022-05-11 15:40:23
 * @FilePath: \data_structures_and_algorithms\Sort\Selection_Sort.c
 * @Description: 
 * 
 */

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
void swpt(int *a,int*b);
void swpt2(int *a,int*b);

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
int i,j;

   for ( j = 0; j < 5; j++)
   {   
      for (i = 0; i < 5; i++)
      {
          if (temp>nums[i])
       {
        temp=i;
       }

      }
      swpt(&nums[0],&nums[temp]);
	  temp=0;
   }
   
int f;
	//输出排序后的数组
	for ( f = 0; f < 5; f++) {
		printf("%d  ", nums[i]);
	}
	printf("\n");

	return 0;
}


void swpt(int *a,int*b)
{
    int temp;
    temp=*a;
    *a ^= *b;
    *b=temp;

}
void swpt2(int *a,int*b)
{

	*a=*a^*b;
	*b=*b^*a;
	*a=*a^*b;
}