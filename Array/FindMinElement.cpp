#include <bits/stdc++.h>
using namespace std;

int findMinElement(int arr[], int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int size = 5;
    int arr[size] = {1, 5, 3, 2, 4};

    cout << findMinElement(arr, size)<<endl;

    return 0;
}