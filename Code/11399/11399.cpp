#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int people;
    int time;
    int num;
    vector<int> v;
    vector<int> res;

    cin >> people;

    for (int i = 0; i < people; i++) {
        cin >> time;
        v.push_back(time);
    }

    sort(v.begin(), v.end());

    num = people;

    for (int i = 0; i < people; i++) {
        res.push_back(v[i] * num);
        num--;
    }
    int total = 0;
    for (int i = 0; i < people; i++) {
        total += res[i];
    }

    cout << total << '\n';
    return 0;
}