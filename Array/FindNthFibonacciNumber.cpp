#include <bits/stdc++.h>
using namespace std;

long long findNthFibonacciNumber(int n)
{
    vector<long long> v(n);

    v[0] = 0;
    v[1] = 1;

    for (int i = 2; i < n; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }
    return v[n - 1];
}

int main()
{
    int n;
    cin >> n;

    // 0 1 1 2 3 5 8 13 ...  F(n-1)+F(n-2)=F(n)
    cout << findNthFibonacciNumber(n) << endl;
    return 0;
}
