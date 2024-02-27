#include <bits/stdc++.h>
using namespace std;

int findSecondLargestElementIndex(int arr[], int size)
{
    int first = 0;
    int second = -1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[first])
        {
            second = first;
            first = i;
        }
        else if (arr[i] < arr[first])
        {
            if (second == -1 || arr[second] < arr[i])
            {
                second = i;
            }
        }
    }
    return second;
}

int main()
{
    int size = 5;
    int arr[size] = {1, 5, 3, 2, 4};

    int index = findSecondLargestElementIndex(arr, size);

    if (index != -1)
    {
        cout << arr[index];
    }
    else
    {
        cout << "not found";
    }

    return 0;
}