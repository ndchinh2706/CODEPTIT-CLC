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

struct PhanSo{
    ll x, y;
};

void nhap(PhanSo &p){
    cin >> p.x >> p.y;
}

void rutgon(PhanSo &p){
    ll gcd = __gcd(p.x, p.y);
    p.x /= gcd; p.y /= gcd;
}

void in(PhanSo &p){
    cout << p.x << '/' << p.y << endl;
}

const bool typetest = 0;
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
