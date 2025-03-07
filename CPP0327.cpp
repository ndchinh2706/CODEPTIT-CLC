// CPP0325.cpp
#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

string binaryToDecimal(string str)
{
    string dec_num = "";
    int power = 0;
    int n = str.length();

    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            dec_num += (1 << power);
        }
        power++;
    }

    return dec_num;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        cout << binaryToDecimal(temp) << endl;
        // int du = 0;
        // for (int i = 0; i < temp.size(); i++)
        // {
        //     du = du * 10 + temp[i] - '0';
        //     du %= 5;
        // }
        // if (du == 0)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
    return 0;
}