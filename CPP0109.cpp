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

bool balance(int n){
    int check = 0;
    while(n != 0){
        if((n % 10) % 2 == 0) check++;
        else check--;
        n /= 10;
    }
    if(check == 0) return 1;
    return 0;
}

const bool typetest = 0;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int n; cin >> n;
        int low = pow(10, n - 1);
        int high = low * 10;
        int cnt = 0;
        for(int i = low; i < high; i++){
            if(balance(i)){
                cnt++;
                if(cnt == 10) {cnt = 0; cout << i << endl; continue;}
                cout << i << ' ';
            }
        }
    }
    return 0;
}
