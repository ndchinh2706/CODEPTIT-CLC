//CPP0313.cpp
#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string sub;
    getline(cin, sub);  

    if (s.find(sub) == string::npos)
    {
        cout << s;
    }
    else
    {
        int index = 0;
        int start = -1;
        int end = -1;
        int num = sub.size();
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == sub[index])
            {
                bool check = true;
                for (int j = 0; j < num; j++)
                {
                    if (s[i + j] != sub[j])
                    {
                        check = false;
                        break;
                    }
                }
                if (check == true)
                {
                    start = i;
                    s.erase(start, num);
                }

            }

        }
        cout << s;
    }
}