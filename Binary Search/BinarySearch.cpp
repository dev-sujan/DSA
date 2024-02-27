/**
 * Binary Search Algorithm
 * Author: Sujan Maji
 * Date: 27/02/2024
 */

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size = 5;
    int nums[size] = {1, 2, 3, 4, 5};
    int key = 4;

    int searchIndex = binarySearch(nums, size, key);

    cout << searchIndex << endl;
    return 0;
}