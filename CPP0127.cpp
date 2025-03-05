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

void sieve(){
    primes[0] = primes[1] = false;
    for(int p = 2; p * p <= maxn; p++)
        if(primes[p])
            for(int i = p * p; i <= maxn; i += p)
                primes[i] = false;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    sieve();
    while(T--){
        bool check = 0;
        int n; cin >> n;
        for(int i = 2; i <= n / 2; i++)
            if(primes[i])
                if(primes[n - i]){
                    cout << i << ' ' << n - i << endl;
                    check = 1; break;
                }
        if(!check) cout << -1 << endl;
    }
    return 0;
}
