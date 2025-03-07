//CPP0312.cpp
#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>


using namespace std;


int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin.ignore();
        getline(cin, s);
        int times;
        cin >> times;
        int countchar[25] = {0};
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (countchar[s[i] - 'a'] == 0)
                {
                    countchar[s[i] - 'a'] = 1;
                    count++;
                }
            }
        }
        if ((25 - count) > times)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
    return 0;
}