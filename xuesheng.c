/*
 * @Author: LiuBTe
 * @Date: 2022-04-26 15:11:52
 * @LastEditors: LiuBT
 * @LastEditTime: 2022-04-27 15:07:55
 * @FilePath: \data_structures_and_algorithms\xuesheng.c
 * @Description: 
 * 
 */
#include <stdio.h>
int main(void)
{
 int a[3][4];
 int i,j;
 printf("请输入12个整数");
 for(i=0;i<3;i++)
 {
  for(j=0;j<4;j++)
  scanf("%d",&a[i][j]);
  } 
  for(i=0;i<3;i++)
  {
   for(j=0;j<4;j++)
   printf("a[%d][%d]=%d\n",i,j,a[i][j]);
  }
}