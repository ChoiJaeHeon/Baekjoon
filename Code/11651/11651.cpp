#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num;
    int x;
    int y;

    cin >> num;
    vector<pair<int, int>> a;

    for (int i = 0; i < num; i++) {
        cin >> x >> y;
        a.push_back({y, x});
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < num; i++) {
        cout << a[i].second << " " << a[i].first << '\n';
    }

    return 0;
}