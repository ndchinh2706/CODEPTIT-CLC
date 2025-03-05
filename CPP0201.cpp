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

vector<int> buildprefix(const vector<int> &v) {
    int n = v.size();
    vector<int> prefix(n);
    prefix[0] = v[0];
    for(int i = 1; i < n; i++)
        prefix[i] = min(prefix[i - 1], abs(v[i] - v[i - 1]));
    return prefix;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        vector<int> v;
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        vector<int> prefix = buildprefix(v);
        cout << prefix[n - 1] << endl;
    }
    return 0;
}
