#include <iostream>
#define MAX 1000001

using namespace std;

long long int sum[MAX];

int DP(int num) {
    sum[1] = 1;
    
    for(int i = 2; i <= num; i++) {
        sum[i] = (sum[i - 1] + sum[i - 2] + sum[i - 3]) % 1000000009;
        if(i == 2) {
            sum[i] += 1;
        }
        if(i == 3) {
            sum[i] += 1;
        }
    }

    return (sum[num]);
}

int main(void) {
    int num;
    cin >> num;

    for(int i = 0; i < num; i++) {
        int N;
        cin >> N;
        int res = DP(N);
        cout << res << '\n';
    }
    return 0;
}