#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp%100 == 86)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }   
    }
    return 0;
}
