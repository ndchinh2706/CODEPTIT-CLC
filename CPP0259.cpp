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

vector<vector<int>> mulmat(const vector<vector<int>>& A, const vector<vector<int>>& B){
    int m = sz(A);
    int n = sz(A[0]);
    int p = sz(B[0]);
    vector<vector<int>> ans(m, vector<int>(p, 0));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < p; j++)
            for(int k = 0; k < n; k++)
                ans[i][j] += A[i][k] * B[k][j];
    return ans;
}

signed main(void){
    vector<vector<int>> A, B;
    int n, m, p; cin >> n >> m >> p;
    for(int i = 0; i < n; i++){
        vector<int> row;
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            row.push_back(x);
        }
        A.push_back(row);
    }
    for(int i = 0; i < m; i++){
        vector<int> row;
        for(int j = 0; j < p; j++){
            int x; cin >> x;
            row.push_back(x);
        }
        B.push_back(row);
    }
    vector<vector<int>> ans = mulmat(A, B);
    for(auto row : ans){
        for(auto x : row)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
