#include <iostream>
#include <stack>

using namespace std;

int main() {

    int num, a;
    stack<int> st;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> a;
        if (a == 0) {
            st.pop();
        }
        else
            st.push(a);
    }
    int sum = 0;
    int size = st.size();
    for (int i = 0; i < size; i++) {
        sum += st.top();
        st.pop();
    }    
    
    cout << sum << '\n';
    return 0;
}