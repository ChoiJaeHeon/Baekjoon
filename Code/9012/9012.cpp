#include <iostream>
#include <stack>

using namespace std;

int main() {

    int num;
    int res = 0;
    string s;
    stack<char> st;

    cin >> num;

    for (int i = 0; i < num; i++) {
        s = "";
        res = 0;
        if (!st.empty()) {
            while (!st.empty())
                st.pop();
        }
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == '(')
                st.push(s[j]);
            else {
                if (st.empty()) {
                    res = -1;
                    break;
                }
                else
                    st.pop();
            }
        }
        if (!st.empty())
            res = -1;
        if (res == -1)
            cout << "NO" <<'\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}