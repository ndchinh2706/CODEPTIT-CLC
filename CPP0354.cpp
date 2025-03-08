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

string encryption(string &s){ 
    string ans;
    s += 'a';
    int len = s.length(); int cnt = 1; char cur = s[0];
    for(int i = 1; i < s.length(); i++){
        if(s[i] == cur) cnt++;
        else{
            vector<int> temp;
            int cntlen = 0, cnttemp = cnt;
            while(cnttemp != 0){
                temp.push_back(cnttemp % 10);
                cnttemp /= 10;
            }
            ans += cur;
            for(auto it = temp.rbegin(); it != temp.rend(); it++)
                ans += char (*it + '0');
            cur = s[i];
            cnt = 1;
        }
    }
    return ans;
}

const bool typetest = 1;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    cin.ignore();
    while(T--){
        string s;
        getline(cin, s);
        cout << encryption(s) << endl;
    }
    return 0;
}
