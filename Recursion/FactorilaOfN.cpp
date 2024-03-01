#include <bits/stdc++.h>
using namespace std;

long factorialOfN(int n)
{
    if (n <= 0)
        return 1;
    return n * factorialOfN(n - 1);
}

int main()
{
    int n = 5;

    cout << factorialOfN(n) << endl;

    return 0;
}