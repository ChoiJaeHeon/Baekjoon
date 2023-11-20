#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int num;

    vector<int> v;
    vector<int> odds;

    for (int i = 0; i < 7; i++) {
        cin >> num;
        v.push_back(num); 
    }

    for (int i = 0; i< v.size(); i++) {
        if (v[i] % 2 == 1) {
            odds.push_back(v[i]);
        }
    }

    sort(odds.begin(), odds.end());
    int total = 0;
    
    for (int i = 0; i < odds.size(); i++) {
        total += odds[i];
    }

    if (odds.size() == 0) {
        cout << "-1";
    }
    else {
        cout << total << '\n' << odds[0];
    }

    return 0;
}