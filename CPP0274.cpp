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

const int maxn = 1e6 + 7;
vector<int> exist(maxn, 0);
vector<int> v;

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int n; cin >> n;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
            exist[v[i]]++;
        }
        int size = sz(v);
        for(int i = 0; i < size; i++){
            if(exist[v[i]] > 1){
                sum += exist[v[i]];
                exist[v[i]] = 0;
            }
        }
        cout << sum << endl;
        v.clear(); exist.assign(maxn, 0);
    }
    return 0;
}
