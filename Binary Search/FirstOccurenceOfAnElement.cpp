#include <bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int first = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return first;
}

int main()
{

    int nums[] = {1, 2, 2, 3, 3, 3, 3, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int key = 3;

    int searchIndex = lowerBound(nums, size, key);

    cout << searchIndex << endl;
    return 0;
}