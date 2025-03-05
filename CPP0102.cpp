#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        char c; cin >> c;
        if(c >= 'A' && c <= 'Z') cout << char(c + 32) << endl;
        else cout << char(c - 32);
    }
    return 0;
}
