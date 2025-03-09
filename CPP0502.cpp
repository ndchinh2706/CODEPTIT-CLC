#include<bits/stdc++.h>
using namespace std;
//#define int long long
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

struct ThiSinh{
    string name, dob;
    double p1, p2, p3;
};

void nhap(ThiSinh &A){
    getline(cin, A.name);
    getline(cin, A.dob);
    cin >> A.p1 >> A.p2 >> A.p3;
}

void in(ThiSinh &A){
    double total = A.p1 + A.p2 + A.p3;
    cout << A.name << ' ' << A.dob << ' ' << setpre(1) << total << endl;
}

const bool typetest = 0;
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
