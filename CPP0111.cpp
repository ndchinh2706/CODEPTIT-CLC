#include <bits/stdc++.h>
using namespace std;

bool check(long long n)
{
    int current = n % 10;
    n /= 10;
    while (n != 0)
    {
        if (abs((n % 10) - current) != 1)
            return false;
        current = n % 10;
        n /= 10;
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        if (check(temp))
            cout <<"YES" << endl;
        else    
            cout << "NO" << endl;
    }
    return 0;
}