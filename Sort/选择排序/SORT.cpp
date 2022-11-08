/*
 * @Author: LiuBT
 * @Date: 2022-05-10 23:25:42
 * @LastEditors: LiuBT
 * @LastEditTime: 2022-05-11 15:40:23
 * @FilePath: \data_structures_and_algorithms\Sort\Selection_Sort.c
 * @Description:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <thread>
#include <stdlib.h> 
#include <windows.h>
void swap(int* a, int* b);//交换两个数
void swap2(int* a, int* b);
int* data_generation(int nums);//生成随机数列 nums：生成的个数
void selectionSortMin(int* nums, int length);
void selectionSortMax(int* nums, int length);//选择排序从大到小
void insertion_sort(int *nums, int length);//插入排序
void quickSort(int* nums, int begin, int end);//快速排序
bool Bogo_Is_sorted(int* a, int n);
void Bogo_Shuffle(int* a, int n);
void BogoSort(int* a, int n);//猴子排序
void run(int seocnds);
void sleepSort(int* nums, int length);//睡眠排序//有问题


#define number_Of_Test  5

int main() {
	
	//sortMin(nums, 5);
	int* nums = data_generation(number_Of_Test);

	//insertion_sort(nums,5);
	BogoSort(nums, number_Of_Test);

	printf("\n排序后的数据为:\n");

	for (int f = 0; f < 5; f++) 
	{
		printf("%d  ", nums[f]);
	}

	return 0;
}





int* data_generation(int nums) //生成随机数列 nums：生成的个数
{
	int a;
	int* p=(int*)malloc(nums*sizeof(int)); 
	srand((unsigned int)time(0));//修改种子
	for (int i = 0; i < nums; i++)
	{
		a = rand();
		p[i] = a % (100 - 1 + 1) + 1;//设置范围  1-100
		//printf("%d  ", p);
		

	}
	printf("随机生成的数据为:\n");

	for (int f = 0; f < 5; f++)
	{
		printf("%d  ", p[f]);
	}

	return p;
}

void swap(int* a, int* b) //交换两个数
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap2(int* a, int* b)//异或法交换数据
{

	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;
}
void selectionSortMin(int* nums, int length)//选择排序
{
	for (int i = 0; i < length ; i++)
	{
		int min = i;
		for (int j = i + 1; j < length; j++)     //遍历未排序的元素
			if (nums[j] < nums[min])    //找到目前最小值
				min = j;    //记录最小值
		swap(&nums[min], &nums[i]);    //做交换
	}

}

void selectionSortMax(int *nums, int length)
{
	for (int i = 0; i < length; i++)
	{
		int max = i;
		for (int j = i + 1; j < length; j++)
		{
			if (nums[j] > nums[max])max = j;
		}
		swap(&nums[max],&nums[i]);
	}
}

/*
将第一待排序序列第一个元素看做一个有序序列，把第二个元素到最后一个元素当成是未排序序列。
从头到尾依次扫描未排序序列，将扫描到的每个元素插入有序序列的适当位置。
（如果待插入的元素与有序序列中的某个元素相等，则将待插入元素插入到相等元素的后面。）*/
void insertion_sort(int *nums, int length)//插入排序
{
        for (int i=1;i< length;i++){//遍历每一个数都做一遍标志
                int key = nums[i];//key作为临时储存要排序值的变量
                int j=i-1;//j位前一个
                while((j>=0) && (nums[j]>key)) { //不断与前一个数做比较，如果比他大就把前面的数后移，直到前面的数都比他小，则跳出循环
					nums[j+1] = nums[j];      //数据后移（后一个数等于当前数，标志位前移）
                        j--;
                }
				nums[j+1] = key;//跳出后把空出的位置既前面都是比他小的数的位置，放入临时储存的数(nums[i])
        }
}


/*首先从数列的右边开始往左边找，我们设这个下标为 i，也就是进行减减操作（i--），
找到第 1 个比基准数小的值，让它与基准值交换；
接着从左边开始往右边找，设这个下标为 j，然后执行加加操作（j++），找到第 1 个比基准数大的值，让它与基准值交换；
然后继续寻找，直到 i 与 j 相遇时结束，最后基准值所在的位置即 k 的位置，
也就是说 k 左边的值均比 k 上的值小，而 k 右边的值都比 k 上的值大。*/

void quickSort(int* nums, int begin, int end)//快速排序
{
	if (begin > end)return;
	int temp = nums[begin];
	int i = begin;
	int j = end;
	while (i != j) 
	{
		while (nums[j] >= temp && j > i)
			j--;
		while (nums[i] <= temp && j > i)
			i++;
		if (j > i) 
			swap(&nums[i], &nums[j]);
	}
	nums[begin] = nums[i];
	nums[i] = temp;
	quickSort(nums, begin, i - 1);
	quickSort(nums, i + 1, end);
}



///////////////////////////////////////////////////////////////////////////////////
//Bogosort（猴子排序）,猴排，不多说了，人算不如天算
bool Bogo_Is_sorted(int* a, int n)
{
	while (--n >= 1) {
		if (a[n] < a[n - 1]) return false;
	}
	return true;
}

void Bogo_Shuffle(int* a, int n)
{
	int i, t, r;
	for (i = 0; i < n; i++) {
		t = a[i];
		r = rand() % n;
		a[i] = a[r];
		a[r] = t;
	}
}

void BogoSort(int* a, int n)
{
	while (!Bogo_Is_sorted(a, n)) Bogo_Shuffle(a, n);
}
/////////////////////////////////////////////////////////////////////////////////
//////睡眠排序还有问题，睡不好///////

void run(int seocnds) {
	Sleep(seocnds * 10);
	std::cout << seocnds << " ";
}

void sleepSort(int* nums, int length)
{
	

	for (int i = 0; i < length;i++) {
		std::thread(run, nums[i]).detach();
	}

	//Sleep(1000);
	//std::cout << std::endl;
	
	
}