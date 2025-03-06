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

void updatemat(vector<vector<int>>& v){
    int n = sz(v); int m = sz(v[0]);
    if(n == 0) return; if(m == 0) return;
    vector<bool> row(n, 0);
    vector<bool> col(m, 0);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(v[i][j] == 1){
                row[i] = true;
                col[j] = true;
            }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(row[i] || col[j])
                v[i][j] = 1;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int n, m; cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> v[i][j];
        updatemat(v);
        for(auto& row : v){
            for(auto val : row)
                cout << val << ' ';
            cout << endl;
        }
    }
    return 0;
}
