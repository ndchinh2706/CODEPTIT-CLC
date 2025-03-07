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

string findminnum(int m, int s){
    if(s == 0) return (m == 1) ? "0" : "-1";
    if(s > 9 * m) return "-1";
    string res(m, '0');
    res[0] = '1'; s--;
    for(int i = m - 1; i >= 0; i--){
        if(s >= 9){
            res[i] = '9';
            s -= 9;
        } else{
            res[i] += s;
            s = 0;
        }
    }
    return res;
}

string findmaxnum(int m, int s){
    if(s == 0) return (m == 1) ? "0" : "-1";
    if(s > 9 * m) return "-1";
    string res(m, '0');
    for(int i = 0; i < m; i++){
        if(s >= 9){
            res[i] = '9';
            s -= 9;
        } else{
            res[i] += s;
            s = 0;
        }
    }
    return res;
}

const bool typetest = 0;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int m, s; cin >> m >> s;
        string minnum = findminnum(m, s);
        string maxnum = findmaxnum(m, s);
        cout << minnum << " " << maxnum << endl;
    }
    return 0;
}
