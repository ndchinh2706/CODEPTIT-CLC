//CPP0309.cpp

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
        int count = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
            {   
                count++;
            }
            
        }
        cout << count << endl;
    }
    return 0;
}