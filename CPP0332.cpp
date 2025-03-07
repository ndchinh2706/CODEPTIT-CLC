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

string createEmail(string fullname){
    transform(fullname.begin(), fullname.end(), fullname.begin(), ::tolower);
    stringstream ss(fullname);
    string word;
    vector<string> name;
    while(ss >> word) name.push_back(word);
    string email;
    email += name.back();
    email += name[0][0];
    for(auto i = 1; i < name.size() - 1; i++)
        email += name[i][0];
    email += "@ptit.edu.vn";
    return email;
}


const bool typetest = 0;
signed main(void){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T(1);
    if(typetest) cin >> T;
    while(T--){
        string fullname;     
        getline(cin, fullname);
        string email = createEmail(fullname);
        cout << email << endl;
    }
    return 0;
}
