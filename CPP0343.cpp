#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        vector<int> a;
        int x;
        while (cin >> x) {
            a.push_back(x);
            if (cin.peek() == '\n') break;
        }
        
        int even = 0, odd = 0;
        for (int num : a) {
            if (num % 2 == 0) even++;
            else odd++;
        }
        
        if ((even > odd && a.size() % 2 == 0) || (odd > even && a.size() % 2 != 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
