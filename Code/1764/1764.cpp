#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int never_seen, never_heard;
    string s;

    cin >> never_heard >> never_seen;

    vector<string> nh;
    vector<string> res;

    for (int i = 0; i < never_heard; i++) {
        cin >> s;
        nh.push_back(s);
    }

    sort(nh.begin(), nh.end());

    for (int i = 0; i < never_seen; i++) {
        cin >> s;
        if (binary_search(nh.begin(), nh.end(), s))
            res.push_back(s);
    }

    sort(res.begin(), res.end());

    cout << size(res) << '\n';
    for(auto it : res)
        cout << it << '\n';

    return 0;
}