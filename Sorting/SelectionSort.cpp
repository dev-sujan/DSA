/**
 * Selection Sort Algorithm
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

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in the unsorted part of the array
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // Swap the minimum element with the first element of the unsorted part of the array
        swap(arr[i], arr[min_idx]);
    }
}

int main()
{
    // Write your code
    int arr[] = {5, 3, 8, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    printArray(arr, size);

    return 0;
}