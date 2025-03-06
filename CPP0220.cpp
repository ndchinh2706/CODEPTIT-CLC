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

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int n; cin >> n;
        vector<vector<int>> v;
        for(int i = 0; i < n; i++){
            vector<int> row;
            for(int j = 0; j < n; j++){
                int x; cin >> x;
                row.push_back(x);
            }
            v.push_back(row);
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                if(i == 0 || j == 0 || i == n - 1 || j == n - 1) cout << v[i][j] << ' ';
                else cout << "  ";
            cout << endl;
        }
    }
    return 0;
}
