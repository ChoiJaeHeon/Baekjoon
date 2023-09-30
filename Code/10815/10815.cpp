#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num;
    cin >> num;
    vector<int> a(num);
    int card;
    for (int i = 0; i < num; i++) {
        cin >> card;
        a[i] = card;
    }
    
    sort(a.begin(), a.end());

    int size;
    cin >> size;
    int temp;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        if (binary_search(a.begin(), a.end(), temp))
            cout << '1' << ' ';
        else
            cout << '0' << ' ';

    }

    /* 
    이 로직은 시간복잡도가 n^2이라서 안됨
    int flag = 0;
    for (int i = 0; i < size; i++) {
        flag = 0;
        for (int j = 0; j < num; j++) {
            if (a[j] == b[i])
                flag = 1;
        }
        if (flag == 1)
            cout << "1" << " ";
        else
            cout << "0" << " ";
    }
    */

    return 0;
}