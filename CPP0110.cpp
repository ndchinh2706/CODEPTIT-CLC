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
vector<int> v = {0, 6, 8};

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        string s; cin >> s;
        for(int i = 0; i < s.length() - 1; i++){
            string sub = s.substr(i, 3);
            if(sub == "084") s.erase(i, 3);
        }
        cout << s << endl;
    }
    return 0;
}
