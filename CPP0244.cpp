//CPP0244.cpp

#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>
using namespace std;

vector<int> a;

bool find(int n){
    for(int i = 0; i < a.size(); i += 1){
        if(a[i] == n) return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int index = 0;

    for (int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        if(find(x) == 0)
        {
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}