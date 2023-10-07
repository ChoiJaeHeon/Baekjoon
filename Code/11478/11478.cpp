#include <iostream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    string tmp;
    cin >> s;
    set<string> part_string;

    for (int i = 0; i < s.length(); i++) {
        tmp ="";
        for (int j = i; j < s.length(); j++) {
            tmp += s[j];
            part_string.insert(tmp);
        }
    }

    cout << size(part_string);        
    return 0;
}