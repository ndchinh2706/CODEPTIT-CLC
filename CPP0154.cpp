#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>
using namespace std;


long long sum(long long start, long long end)
{
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

        long long times = a % b;
        if (times == 0)
        {
            long long res = sum(1, a);
            if (res == b)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        else
        {
            long long res = 0;
            res += (sum(1, a) - b) * times;
            res += sum(1, times);
            if (res == b)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }
}