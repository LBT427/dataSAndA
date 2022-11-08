
int SequenceSearch(int *arr, int length, int value);
int SequenceSearch2(int* arr, int length, int value);

int BinarySearch1(int *arr, int length, int value);
int BinarySearch2(int *arr, int value, int low, int high);

int SequenceSearch(int *arr, int length, int value)
{

	for (int j = 0; j < length; j++)
	{
		if (arr[j] == value)return arr[j];
	}
	return -1;

}
int SequenceSearch2(int* arr, int length, int value)
{

    for (int j = 0; j < length; j++)
    {
        if (arr[j] == value)return j;
    }
    return -1;

}
int BinarySearch1(int *arr, int length, int value) 
{
    int low, high, mid;
    low = 0;
    high = length - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == value)
            return mid;
        if (arr[mid] > value)
            high = mid - 1;
        if (arr[mid] < value)
            low = mid + 1;
    }
    return -1;

}
int BinarySearch2(int *arr, int value, int low, int high)
{
    int mid = low + (high - low) / 2;
    if (arr[mid] == value)
        return mid;
    if (arr[mid] > value)
        return BinarySearch2(arr, value, low, mid - 1);
    if (arr[mid] < value)
        return BinarySearch2(arr, value, mid + 1, high);
}


