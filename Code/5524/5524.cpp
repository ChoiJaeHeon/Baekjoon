#include <iostream>

using namespace std;

int main() {

    int num;
    string s;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if ((65 <= s[j] && s[j] <= 91)) {
                s[j] += 32;
            }
        }
        cout << s << '\n';
    }
    return 0;
}