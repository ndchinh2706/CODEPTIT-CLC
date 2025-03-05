#include<bits/stdc++.h>
using namespace std;
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

int findmissing(const vector<int> &v){
    vector<int> temp = v;
    sort(temp.begin(), temp.end());
    auto it = temp.begin();
    while (it != temp.end() && *it <= 0) it++;
    int missing = 1;
    while(it != temp.end()){
        if(*it == missing) missing++;
        else if (*it > missing) break;
        it++;
    }
    return missing;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        cout << findmissing(v) << endl;
    }
    return 0;
}
