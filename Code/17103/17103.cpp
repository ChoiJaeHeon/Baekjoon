#include <iostream>
#include <cmath>

using namespace std;
int main() {

    bool arr[1000001];

    for (int i = 0; i < 1000001; i++) {
		arr[i] = true;
	}

    arr[0] = {false};
    arr[1] = {false};    
    for (int i = 2; i <= sqrt(1000001); i++) {
        for (int j = 2; i * j < 1000001; j++) {
            arr[i * j] = false;
        }
    }

    int num, gold;
    int cnt = 0;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> gold;
        cnt = 0;
        for (int j = 2; j <= gold / 2; j++) {
            if ((arr[j] == true) && (arr[gold - j] == true) )
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}