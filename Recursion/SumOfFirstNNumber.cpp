#include <bits/stdc++.h>
using namespace std;

long sumOfFirstNNumber(int n)
{
    if (n <= 0)
        return 0;
    return n + sumOfFirstNNumber(n - 1);
}

int main()
{
    int n = 10;

    cout << sumOfFirstNNumber(n)<<endl;

    return 0;
}