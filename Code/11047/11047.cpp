#include <iostream>
#include <vector>

using namespace std;

int main() { // 그리디 알고리즘을 활용하는 문제!!

    int n, m;
    int total = 0;
    int coin[10] = {0, };
    vector<int> ans;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    for (int i = 1; i <= n; i++) {
        if (m / coin[n-i]) {
            ans.push_back(m / coin[n-i]);
            m %= coin[n - i];
        }
    }   

    for (int i = 0; i < ans.size(); i++) {
        total += ans[i];
    }

    cout << total;

    return 0;
}