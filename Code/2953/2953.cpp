    #include <iostream>
    #include <vector>
    #include <algorithm>

    using namespace std;

    int main() {

        int a = 0;
        int total = 0;
        vector<pair<int, int>> v;

        for (int i = 1; i <= 5; i++) {
            total = 0;
            for (int j = 0; j < 4; j++) {
                cin >> a;
                total += a;
            }
            v.push_back(pair(total, i));
        }
        sort(v.begin(), v.end(), greater<>());
        cout << v[0].second << " " << v[0].first;
        return 0;
    }