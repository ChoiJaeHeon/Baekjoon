#include <iostream>

using namespace std;

int dp(int num) {
    
    if (num == 1)
        return 1;
    if (num == 2)
        return 2;
    if (num == 3)
        return 4;
    if (num >= 4) 
        return dp(num - 1) + dp(num - 2) + dp(num -3);
    
    else
        return 0;
}

int main() {

    int num;
    int rep;
    int res = 0;

    cin >> rep;

    for (int i = 0; i < rep; i++) {
    
    cin >> num;

    res = dp(num);

    cout << res << '\n';
    
    }

    return 0;
}