#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int given_num, test_num;
    int a;
    vector<int> cards;
    vector<int> res;
    cin >> given_num;

    for (int i = 0; i < given_num; i++) {
        cin >> a;
        cards.push_back(a);
    }

    sort(cards.begin(), cards.end());
    cin >> test_num;
    for (int i = 0; i < test_num; i++) {
        cin >> a;
        cout << upper_bound(cards.begin(), cards.end(), a) - lower_bound(cards.begin(), cards.end(), a) << " ";
    }

    return 0;
}