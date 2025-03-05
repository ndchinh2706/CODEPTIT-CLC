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
vector<int> v = {0, 6, 8};

bool check_lucky_num(int n){
    while(n != 0){
        if(find(v.begin(), v.end(), n % 10) == v.end()) return 0;
        n /= 10;
    }
    return 1;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int n; cin >> n;
        if(check_lucky_num(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
