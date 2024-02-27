/**
 * Modified Bubble Sort Algorithm
 * Author: Sujan Maji
 * Date: 27/02/2024
 */

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

void modifiedBubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    // Write your code
    int arr[] = {5, 3, 8, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    modifiedBubbleSort(arr, size);

    printArray(arr, size);

    return 0;
}