#include <iostream>
#include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;

    int arr[123456 * 2 + 1] = {0};

    arr[1] = 1;
    for (int i = 2; i <= sqrt(123456 * 2 + 1); i++) {
        for (int j = 2; i * j <= 123456 * 2 + 1; j++) {
            arr[i * j] = 1;
        }
    }


    while (true) {
        cin >> N;

        if (N == 0) 
            break;
        int cnt = 0;

        for (int i = N + 1; i <= 2 * N; i++) {
            if (!arr[i])
                cnt++;
        }

        cout << cnt << '\n';
    }
    return 0;
}