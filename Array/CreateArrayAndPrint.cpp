#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code

    int size;
    cout << "Enter the array size : ";
    cin >> size;

    int array[size];

    cout << "Enter array elements : ";
    // input from user
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }


    //Print Array 
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ", "; 
    }
    
    

    return 0;
}