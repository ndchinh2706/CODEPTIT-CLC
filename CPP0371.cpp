#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s, res = "";
    cin >> s;

    for (char c : s) {
        char ngam = tolower(c);
        if (ngam != 'a' && ngam != 'e' && ngam != 'i' && ngam != 'o' && ngam != 'u' && ngam != 'y') {
            res += '.';
            res += ngam;
        }
    }

    cout << res;
    return 0;
}
