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
        int n, m; cin >> n >> m;
        vector<int> v1(n), v2(m);
        for(int i = 0; i < n; i++) cin >> v1[i];
        for(int i = 0; i < m; i++) cin >> v2[i];
        set<int> uni(v1.begin(), v1.end());
        for(int x : v2) uni.insert(x);
        set<int> inter;
        set<int> temp(v1.begin(), v1.end());
        for(int x : v2)
            if(temp.find(x) != temp.end())
                inter.insert(x);
        for(int x : uni) cout << x << ' ';
        cout << endl;
        for(int x : inter) cout << x << ' ';
        cout << endl;
    }
    return 0;
}
