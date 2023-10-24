#include <iostream>
#include <queue>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int rep, num;
    string ord;
    queue<int> q;

    cin >> rep;

    for (int i = 0; i < rep; i++) {
        cin >> ord;
        if (ord == "push") {
            cin >> num;
            q.push(num);
        }
        else if (ord == "pop") {
            if (q.empty())
                cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (ord == "size") {
            cout << q.size() << '\n';
        }
        else if (ord == "empty") {
            if (q.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (ord == "front") {
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.front() << '\n';
        }
        else if (ord == "back") {
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.back() << '\n';
        }
    }
    return 0;
}