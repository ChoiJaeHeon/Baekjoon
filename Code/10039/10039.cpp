#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    int total = 0;
    vector<int> v;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        if (num >= 40)
            v.push_back(num);
        else
            v.push_back(40);
    }

    for (int i = 0; i < v.size(); i++) {
        total += v[i];
    }

    cout << total/5;
    return 0;
}