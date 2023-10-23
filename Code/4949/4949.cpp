#include <iostream>
#include <stack>

using namespace std;

int main() {

    int res;

    string s;
    stack<char> st;
    
    while(true) {
        res = 0;
        s = "";
        getline(cin, s);
        while (!st.empty())
            st.pop();
        if (s == ".")
            break;
        else {
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '[' || s[i] == '(') {
                    st.push(s[i]);
                }
                else if (s[i] == ']') {
                    if (st.empty() || st.top() != '[') {
                        res = -1;
                        break;
                    }
                    st.pop();
                }
                else if (s[i] == ')') {
                  if (st.empty() || st.top() != '(') {
                        res = -1;
                        break;
                    }
                    st.pop();
                }
            }
                if (res == 0 && st.empty())
                    cout << "yes" << '\n';
                else
                    cout << "no" << '\n';
            }
    }

    return 0;
}