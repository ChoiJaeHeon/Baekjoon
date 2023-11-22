#include <iostream>
#include <queue>

using namespace std;

int main() {

    int cards;
    int discard = 0;
    queue<int> q;

    cin >> cards;

    for (int i = 1; i <= cards; i++) {
        q.push(i);
    }

    while (q.size() != 1) {
        q.pop();
        discard = q.front();
        q.pop();
        q.push(discard);
    }

    cout << q.front() << '\n';

    return 0;
}