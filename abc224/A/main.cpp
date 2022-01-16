#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int size;
    cin >> s;
    size = s.size();

    if(s.at(size - 1) == 'r' && s.at(size - 2) == 'e') {
        cout << "er" << endl;
    } else if (s.at(size - 1) == 't' && s.at(size - 2) == 's' && s.at(size - 3) == 'i') {
        cout << "ist" << endl;
    }
}