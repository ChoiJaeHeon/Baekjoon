#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    int num;

    cin >> N;
    vector<int> cards;
    
    for (int i = 0; i < N; i++) {
        cin >> num;
        cards.push_back(num);
    }

    sort(cards.begin(), cards.end());

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        if (binary_search(cards.begin(), cards.end(), num))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}