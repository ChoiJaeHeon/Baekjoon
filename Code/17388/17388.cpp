#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int s, k, h;
    int total = 0;
    vector<int> v;
    cin >> s >> k >> h;

    v.push_back(s);
    v.push_back(k);
    v.push_back(h);

    for (int i = 0; i < 3; i++) {
        total += v[i];
    }

    sort(v.begin(), v.end());

    if (total >= 100) {
        cout << "OK";
    }
    else {
        if (v[0] == s) 
            cout << "Soongsil";
        if (v[0] == k) 
            cout << "Korea";
        if (v[0] == h) 
            cout << "Hanyang";
    }
    return 0;
}