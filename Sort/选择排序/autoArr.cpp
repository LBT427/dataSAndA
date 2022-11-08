#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arrDilatation(int *ar,int length)
{

	int arrLen = sizeof(ar) / sizeof(ar[0]);

	if (arrLen<length)
	{
		int* arr = (int*)malloc(length * sizeof(int));

		memcpy(arr, ar, arrLen);
		memset(ar, 0, sizeof(int) * arrLen);
		ar = (int*)realloc(ar,length * sizeof(int));
		memcpy(ar,arr , length);
		free(arr);
	}
	//return arr;
}


#define Arr  

void initArr(int *a ,int length)
{

	a = (int*)calloc(1,length * sizeof(int));

}


void setArr(int *arr,int add,int num) 
{
	if (add< sizeof(arr) / sizeof(arr[0]))
	{
		arr[add] = num;
	}
	else
	{
		arrDilatation(arr, 10);
		arr[add] = num;
	}
	
}

int readArr(int* arr, int add)
{
	return arr[add];
}

int searchArr(int* arr, int num)
{
	return SequenceSearch2( arr, sizeof(arr) / sizeof(arr[0]) , num);
}



void autoArr(int* name, int length)
{
	initArr(name, length);
	if (true)
	{
		
	}
}
