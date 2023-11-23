#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    vector<int> v;
    int total= 0;

    for (int i = 0; i < 2; i++) {
        total = 0;
        for (int j = 0; j < 4; j++) {
            cin >> n;
            total += n;
        }
        v.push_back(total);
    }
    sort(v.begin(), v.end(), greater<>());
    cout << v[0];
    return 0;
}