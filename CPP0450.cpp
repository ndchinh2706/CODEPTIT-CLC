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

signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){
        int n, cnt = 0; cin >> n;
  		  vector<int> v(n);
  		  map<int, int> m;
        bool check = 0;
  		  for(int i = 0; i < n; i++)
            cin >> v[i];
  		  for(int i = 0; i < n; i++){
    		  m[v[i]]++;
    			if(m[v[i]] > 1){
    				cout << v[i] << endl;
    				check = 1; break;
    			}
    	  }
    		if(check == 0) cout << "-1" << endl;
    }
    return 0;
}
