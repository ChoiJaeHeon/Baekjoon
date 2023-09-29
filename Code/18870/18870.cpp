#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;;

int main() {

    int num;
    int tmp;

    cin >> num;
    vector<int> a(num);
    vector<int> b(num);

    for (int i = 0; i < num; i++) {
        cin >> tmp;
        a[i] = tmp;
        b[i] = tmp;
    }

    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    for (int i = 0; i < num; i++) {
        cout << lower_bound(b.begin(), b.end(), a[i]) - b.begin() <<" ";
    }

    
    return 0;
}