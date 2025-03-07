//CPP0325.cpp
#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp; 
        cin >> temp;
        int du = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            du = du * 10 + temp[i] - '0';
            du %= 5;
        }
        if (du == 0)
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