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

set<int> splitnum(vector<int> &v){
    set<int> s;
    int size = sz(v);
    for(int i = 0; i < size; i++){
        while(v[i] != 0){
            s.insert(v[i] % 10);
            v[i] /= 10;
        }
    }
    return s;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        set<int> s;
        vector<int> v;
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        s = splitnum(v);
        for(auto x : s) cout << x << ' ';
        cout << endl;
    }
    return 0;
}
