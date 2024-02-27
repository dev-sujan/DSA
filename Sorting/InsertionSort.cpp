/**
 * Insertion Sort Algorithm
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

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{
    // Write your code
    int arr[] = {5, 3, 8, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    printArray(arr, size);

    return 0;
}