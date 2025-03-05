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

int revnum(int n){
    int newnum = 0;
    while(n != 0){
        newnum = newnum * 10 + n % 10;
        n /= 10;
    }
    return newnum;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int n; cin >> n;
        if(n == revnum(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
