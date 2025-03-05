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

vector<int> buildprefix(const vector<int> &v){
    int n = sz(v);
    vector<int> prefix(v);
    prefix[0] = v[0];
    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + v[i];
    return prefix;
}

int sum_l_r(const vector<int> &prefix, int l, int r){
    if(l == 0) return prefix[r];
    else return prefix[r] - prefix[l - 1];
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int n, q; cin >> n >> q;
        vector<int> v(n);
        for(int i = 0; i < n; i++) 
            cin >> v[i];
        vector<int> prefix = buildprefix(v);
        while(q--){
            int l, r; cin >> l >> r;
            cout << sum_l_r(prefix, l - 1, r - 1) << endl;
        }
    }
    return 0;
}
