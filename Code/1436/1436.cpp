#include <iostream>
#include <string>
using namespace std;

int main() {

    int num = 666;
    int ord;
    int cnt = 0;
    string b;

    cin >> ord;
    while (ord != cnt) {
        b = to_string(num); // to_string으로 숫자를 문자열로 바꾸기
        for(int i = 0; i < b.length() - 2; i++) { //b.length로 문자열 길이 구하기
            if (b[i] == '6') {
                if (b[i + 1] == '6') {
                    if (b[i + 2] == '6') {
                        cnt++;
                        break;
                    }
                }
            }
        }
    if (ord != cnt)
        num++;
    }
    
    cout << num;

    return 0;
}