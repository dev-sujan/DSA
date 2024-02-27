#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int size, int key)
{
    int l = 0;
    int r = size - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size = 5;
    int nums[size] = {1, 2, 3, 4, 5};
    int key = 3;

    int searchIndex = binarySearch(nums, size, key);

    searchIndex >= 0
        ? cout << key << " found at index " << searchIndex << endl
        : cout << key << " not found" << endl;
    return 0;
}