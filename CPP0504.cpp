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

struct SinhVien{
    string id = "B20DCCN001";
    string name, group, dob;
    double gpa;
};

string formatdob(string& dob) {
    int day, month, year;
    char sep;
    stringstream ss(dob);
    ss >> day >> sep >> month >> sep >> year;
    stringstream format;
    format << setw(2) << setfill('0') << day << "/"
           << setw(2) << setfill('0') << month << "/"
           << setw(4) << setfill('0') << year;
    return format.str();
}

void nhap(SinhVien &a){
    getline(cin, a.name);
    getline(cin, a.group);
    getline(cin, a.dob);
    cin >> a.gpa;
    a.dob = formatdob(a.dob);
}

void in(SinhVien &a){
    cout << a.id << ' ' << a.name << ' ' << a.group << ' ' << a.dob << ' ' << setpre(2) << a.gpa << endl;
}

const bool typetest = 0;
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
