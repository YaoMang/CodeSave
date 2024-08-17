// 简单插入排序
void SimpleInsertionSort(int A[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        // 寻找新元素的插入位置
        int Key = A[i];
        int j = i - 1; // 从前一个位置开始寻找
        while(j >= 0 && Key < A[j]) // j在数组范围内并且关键字小于A[j]
        {
            A[j + 1] = A[j]; // 使用A[j+1]覆盖A[j]
            --j; // 继续向前寻找
        }// 跳出循环，此时 Key >= A[j] 或者 j = -1
        A[j + 1] = Key; // 将关键字插入
    }
}

// 简单插入排序-带哨兵的版本，要求A[0]未使用
void SimpleInsertionSort(int A[], int size)
{
    for(int i = 1; i <= size; ++i)
    {
        // 寻找新元素的插入位置
        A[0] = A[i];
        int j;
        for(j = i - 1; A[0] < A[j]; --j)
        {
            A[j + 1] = A[j];
        }
        A[j + 1] = A[0];
    }
}

// 二分搜索，返回
int BinarySearch(int A[], int start, int end, int Key)
{
    
}