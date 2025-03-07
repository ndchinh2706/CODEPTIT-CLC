#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

string cap(string s) {
    string res = s;
    res[0] = toupper(res[0]);
    for (int i = 1; i < res.size(); ++i) {
        res[i] = tolower(res[i]);
    }
    return res;
}

string normal(string name) {
    stringstream ss(name);
    vector<string> tu;
    string s;
    
    while (ss >> s) {
        tu.push_back(s);
    }
    string ten = tu.back();
    for (char& c : ten) {
        c = toupper(c);
    }
    tu.pop_back();
    string res = "";
    for (string w : tu) {
        res += cap(w) + " ";
    }
    res.erase(res.size() - 1);
    res += ", " + ten;
    return res;
}

int main() {
    string name;
    getline(cin, name);
    cout << normal(name) << endl;
    return 0;
}
