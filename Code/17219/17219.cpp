#include <iostream>
#include <map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    string s1, s2;
    map<string, string> s_pair;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> s1 >> s2;
        s_pair.insert({s1, s2});
    }

    for (int i = 0; i < m; i++) {
        cin >> s1;
        cout << s_pair[s1] << '\n';
    }
    return 0;
}