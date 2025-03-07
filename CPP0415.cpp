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
        set<int, greater<int>> s1;
        set<int> s2;
        int n, m; cin >> n >> m;
        for(int i = 0; i < n; i++){
            int x; cin >> x; 
            s1.insert(x);
        }
        for(int i = 0; i < m; i++){
            int x; cin >> x; 
            s2.insert(x);
        }
        auto it1 = s1.begin();
        auto it2 = s2.begin();
        cout << *it1 * *it2 << endl;
    }
    return 0;
}
