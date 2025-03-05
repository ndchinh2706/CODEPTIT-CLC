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
map<int, int> m;

bool check_prime(int n){
    if(n < 2) return 0;
    if(n == 2 || n == 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    for(int i = 5; i * i <= n; i += 6)
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    return 1;
}

const bool typetest = 0;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int n; cin >> n; 
        if(check_prime(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
