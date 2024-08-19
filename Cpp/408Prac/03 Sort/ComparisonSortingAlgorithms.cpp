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

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 冒泡排序
void BubbleSort(int A[], int size)
{
    for(int i = 0; i < size; ++i) // 最外层循环
    {
        int trigger = 0; // 触发器，检测在一趟排序中是否触发数据交换
        for(int j = 0; j < size - i - 1; ++j) // 排序范围为 A[0, n - i]，从前向后排序
        {
            if(A[j] > A[j + 1]) // 若前一位置大于后一位置，则交换位置，并修改触发器
            {
                swap(A[j], A[j + 1]);
                trigger = 1;
            }
        }
        if(trigger == 0) // 在一轮排序中没有发生位置交换，序列已经有序
        {
            break;
        }
    }
}