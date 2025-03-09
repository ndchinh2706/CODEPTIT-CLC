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

int countmissing(int n, vector<int>& a){
    int L = *min_element(a.begin(), a.end());
    int R = *max_element(a.begin(), a.end());
    unordered_set<int> s(a.begin(), a.end());
    int missing = 0;
    for(int i = L; i <= R; i++){
        if(s.find(i) == s.end())
            missing++;
    }
    return missing;
}

signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        cout << countmissing(n, v) << endl;
    }
    return 0;
}
