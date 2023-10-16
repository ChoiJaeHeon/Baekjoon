#include <iostream>
#include <stack>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, ord;
    cin >> num;

    stack<int> st;

    for (int i = 0; i < num; i++) {
        cin >> ord;
        switch (ord) {
            case 1:
                int n;
                cin >> n;
                st.push(n);
                break;
            case 2:
                if(st.empty())
                    cout << -1 << '\n';
                else {
                    cout << st.top() << '\n';
                    st.pop();
                }
                break;
            case 3:
                cout << st.size() << '\n';
                break;
            case 4:
                if (st.empty())
                    cout << 1 << '\n';
                else
                    cout << 0 << '\n';
                break;
            case 5:
                if (st.empty())
                    cout << -1 << '\n';
                else
                    cout << st.top() << '\n';
                break;
        }

    }
    return 0;
}