#include <iostream>
#include <deque>

using namespace std;

int main() {

    int num, temp;
    deque<int> dq;
    string s;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> s;
        if (s == "push_front") {
            cin >> temp;
            dq.push_front(temp);
        }
        else if (s == "push_back") {
            cin >> temp;
            dq.push_back(temp);
        }
        else if (s == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else
                cout << -1 << '\n';
        }
        else if (s == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else
                cout << -1 << '\n';
        }
        else if (s == "size") {
            cout << dq.size() << '\n';
        }
        else if (s == "empty") {
            if (dq.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (s == "front") {
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.front() << '\n';
        }
        else if (s == "back") {
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.back() << '\n';
        }

    }
    return 0;
}