#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << fixed << setprecision(4) << sqrt(pow((c-a), 2) + pow((d-b), 2)) << endl;
    }
}
