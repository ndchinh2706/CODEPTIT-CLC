//CPP0314.cpp
#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s[10001];

    int n;
    cin >> n;
    int res = 0;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string q;
        getline(cin, q);
        bool check = true;
        for (int j = 0; j < res; j++)
        {
            if (s[j] == q)
            {
                check = false;
                break;
            }
        }
        if (check == true)
        {
            s[res] = q;
            res++;
        }
    }
    cout << res;
    return 0;
}