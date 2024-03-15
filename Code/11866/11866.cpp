#include <iostream>
#include <queue>

using namespace std;

int main() {

    int people, k;

    cin >> people >> k;
    queue<int> q;

    cout << "<";
    for (int i = 1; i <= people; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        for (int i = 1; i < k; i++) {
            q.push(q.front());
            q.pop();
        }
        if (q.size() == 1)
            cout << q.front();
        else
            cout << q.front() << ", ";
        q.pop();
    }
    cout << ">";

    return 0;
}