#include <iostream>
#include <deque>

using namespace std;

int main() {

    int rep, num;
    deque<pair<int, int>> dq;

    cin >> rep;

    for (int i = 1; i <= rep; i++) {
        cin >> num;
        dq.push_back(make_pair(i, num));
    }

    while (!dq.empty()) {
        for (int i = 0; i < rep; i++) {
            if (dq.front().second > 0) {
                cout << dq.front().first << " ";
                int paper = dq.front().second;
                dq.pop_front();
                for (int j = 1; j < paper; j++) {
                    dq.push_back(dq.front());
                    dq.pop_front();
                    
                }
            }
            else {
                cout << dq.front().first << " ";
                int paper = (-1) * dq.front().second;
                dq.pop_front();
                for (int j = 0; j < paper; j++) {
                    dq.push_front(dq.back());
                    dq.pop_back();
                }
            }
        }
    }
    return 0;
}