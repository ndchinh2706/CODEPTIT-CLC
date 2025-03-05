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

const bool typetest = 0;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    sieve();
    while(T--){
        int a, b; cin >> a >> b;
        if(a > b) swap(a, b);
        for(int i = a; i <= b; i++)
            if(primes[i]) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
