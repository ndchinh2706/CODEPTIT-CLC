//CPP0354.cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string s;
        cin >> s;
        //getline(cin, s);
        for (int j = 0; j < s.size(); j++)
        {
            char cur = s[j];
            char next = s[j];
            int count = 1;
            while (next == cur)
            {
                j++;
                next = s[j];
                if (next == cur)
                    count++;
                else
                    j--;
            }
            cout << cur << count;
        }
        cout << endl;
    }
}
