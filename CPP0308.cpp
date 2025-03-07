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

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        string s; cin >> s;
        int len = s.length();
        string ans = "";
        vector<int> cnt(256, 0);
        for(int i = 0; i < len; i++)
            cnt[s[i]]++;
        for(int i = 0; i < len; i++)
            if(cnt[s[i]] == 1) cout << s[i];
        cout << endl;
        cnt.assign(256, 0);
    }
    return 0;
}
