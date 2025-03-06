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
        int sum = 0;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < 3; j++){
                int x; cin >> x;
                if(x == 1) cnt++;
                else cnt--;
            }
            if(cnt > 0) sum++;
        }
        cout << sum << endl;
    }
    return 0;
}
