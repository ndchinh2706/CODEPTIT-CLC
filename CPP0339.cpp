#include <iostream>
#include <string>
using namespace std;

int count(string s) {
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (s[i] == s[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        string s;
        cin >> s;
        cout << count(s) << endl;
    }
    return 0;
}
