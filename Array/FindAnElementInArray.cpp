#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int arrayLengh, int key)
{
    for (int i = 0; i < arrayLengh; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size = 5;
    int nums[size] = {1, 2, 3, 4, 5};
    int key = 3;

    int searchIndex = linearSearch(nums, size, key);

    searchIndex >= 0
        ? cout << key << " found at index " << searchIndex << "." << endl
        : cout << key << " not found." << endl;
    return 0;
}