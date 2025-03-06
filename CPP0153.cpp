#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>
using namespace std;


long long sum(long long start, long long end)
{
    if (start > end || start == end)
    {
        return 0;
    }
    return (start + end) * (end - start + 1) / 2;
}

int main()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        long long a, b;
        cin >> a >> b;

        long long r = 0;
        for (int i = 1; i <= a; ++i)
            r += i % b;
        cout << r << endl;

    }
}