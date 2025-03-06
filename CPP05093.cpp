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

const bool typetest = 0;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int n; cin >> n;
        for(int i = 0; i < 2 * n - 1; i++){
            for(int j = 0; j < 2 * n - 1; j++){
                if(i < n){
                    if(i + n - 1 == j) {cout << "*"; break;}
                    else if(i == n - j - 1) cout << "*";
                    else cout << ' ';
                }
                else{
                    if(i - n + 1 == 2 * (n - 1) - j) {cout << "*"; break;}
                    else if(i == j + n - 1) cout << "*";
                    else cout << ' ';
                }
            }
            cout << endl;
        }
    }
    return 0;
}
