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

const int maxn = 1e7 + 7;
vector<bool> primes(maxn + 1, true);

int revmod(int a, int m){
    a = a % m;
    for(int x = 1; x < m; x++)
        if((a * x) % m == 1)
            return x;
    return -1;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int a, m; cin >> a >> m;
        cout << revmod(a, m) << endl;
    }
    return 0;
}
