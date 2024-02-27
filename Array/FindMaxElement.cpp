#include <bits/stdc++.h>
using namespace std;

int findMaxElement(int arr[], int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int size = 5;
    int arr[size] = {1, 5, 3, 2, 4};

    cout << findMaxElement(arr, size)<<endl;

    return 0;
}