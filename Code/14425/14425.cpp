#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int known, unknown;
    cin >> known >> unknown;

    vector<string> a(known);
    string s;

    for (int i = 0; i < known; i++) {
        cin >> s;
        a[i] = s;
    }

    sort(a.begin(), a.end());
    
    int cnt  = 0;

    for (int i = 0; i < unknown; i++) {
        cin >> s;
        if (binary_search(a.begin(), a.end(), s))
            cnt++;
    }

    cout << cnt;

    return 0;
}