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

vector<int> primefac(int n){
    vector<int> fac;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            fac.push_back(i);
            n /= i;
        }
    }
    if(n > 1)
        fac.push_back(n);
    return fac;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    vector<int> fac, res;
    while(T--){
        int n; cin >> n; 
        fac = primefac(n);
        int cur = fac[0];
        int cnt = 1;
        fac.push_back(0);
        for(int i = 1; i < fac.size(); i++){
            if(fac[i] == cur) cnt++;
            else{
                res.push_back(cur);
                res.push_back(cnt);
                cnt = 1;
                cur = fac[i];
            }
        }
        for(auto x : res) cout << x <<' ';
        cout << endl;
        fac.clear(); res.clear();
    }
    return 0;
}
