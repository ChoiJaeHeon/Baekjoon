#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int a_size;
    int b_size;
    int num;
    vector<int> a;
    vector<int> dup;

    cin >> a_size >> b_size;

    for (int i = 0; i < a_size; i++) {
        cin >> num;
        a.push_back(num);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < b_size; i++) {
        cin >> num;
        if (binary_search(a.begin(), a.end(), num))
            dup.push_back(num);
    }

    int res = a_size + b_size - 2 * size(dup);
    cout << res << '\n';

    return 0;
}