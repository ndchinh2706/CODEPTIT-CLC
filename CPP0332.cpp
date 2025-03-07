#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

string lower(string s) {
    for (char &c : s) {
        c = tolower(c);
    }
    return s;
}

int main() {
    string name;
    getline(cin, name);
    stringstream ss(name);
    vector<string> tu;
    string s;
    while (ss >> s) {
        s=lower(s);
        tu.push_back(s);

    }
    string ten = tu.back();
    ten = lower(ten);
    string email = "";
    for (string ho : tu) 
    {
        email += ho[0];
    }
    email = ten + email.erase(email.size()-1) + "@ptit.edu.vn";
    cout << email << endl;

    return 0;
}
