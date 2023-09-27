#include <iostream>
#include <string>

using namespace std;

int main() {

    int flag = 0;

    string s;

    while (true) {
        cin >> s;
        flag = 0;
        if (s == "0")
            break;
        for (int i = 0; i < s.length() / 2; i++) {
            if (s[i] != s[s.length() - 1 - i])
                flag = 1;
        }
        if (flag == 1)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}