#include <iostream>

using namespace std;

int main() {
    
    string s;
    while (true) {
        getline(cin, s);
        if (cin.eof())
            break;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'i')
                s[i] = 'e';
            else if (s[i] == 'e')
                s[i] = 'i';
            else if (s[i] == 'E')
                s[i] = 'I';
            else if (s[i] == 'I')
                s[i] = 'E';
        }
        cout << s << '\n';
    }

}