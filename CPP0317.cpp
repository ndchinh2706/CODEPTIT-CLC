#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define mp make_pair
#define setpre(n) fixed << setprecision(n)
#define sz(x) (int)x.size()
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;
typedef pair<ld, int> pdi;
typedef pair<int, ld> pid;

bool check_beautynum(const string &s){
    int len = s.length();
    for(int i = 0; i < len; i++)
        if((s[i] - '0') % 2 != 0) return 0;
    return 1;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    cin.ignore();
    while(T--){
        string s; 
        cin.ignore(); getline(cin, s);
        if(check_beautynum(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
