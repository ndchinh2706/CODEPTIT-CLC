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
        int n; cin >> n;
        vector<int> v(n), ans;
        for(int i = 0; i < n; i++)
            cin >> v[i];
        for(int i = 0; i < n; i++)
            if(find(v.begin(), v.end(), i) != v.end()) ans.push_back(i);
            else ans.push_back(-1);
        for(auto x : ans) cout << x << ' ';
        cout << endl;
    }
    return 0;
}
