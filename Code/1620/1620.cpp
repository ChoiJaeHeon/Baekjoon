#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int total_num;
    int ans_num;
    string name;
    vector<string> ans_v;
    vector<string> names;
    map<string, int> map;

    cin >> total_num >> ans_num;

    for (int i = 1; i <= total_num; i++) {
        cin >> name;
        map.insert(pair(name, i));
        names.push_back(name);
    }

    for (int i = 0; i < ans_num; i++) {
        cin >> name;
        if (name.at(0) <= 90 && name.at(0) >= 65) {
            ans_v.push_back(to_string(map[name]));
        }
        else {
            ans_v.push_back(names[stoi(name) - 1]);
        }
    }

    for (int i = 0; i < ans_num; i++) {
        cout << ans_v[i] << '\n';
    }

    return 0;
}