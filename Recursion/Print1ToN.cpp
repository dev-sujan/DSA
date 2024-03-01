#include <bits/stdc++.h>
using namespace std;

void print1ToN(int n)
{
    if (n <= 0)
        return;
    print1ToN(n - 1);
    cout << n << endl;
}

int main()
{
    int n = 10;

    print1ToN(n);
    
    return 0;
}