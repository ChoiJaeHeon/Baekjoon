#include <iostream>

using namespace std;

int main() {

    int num;
    int sum = 0;
    string s;

    while (true) {
        cin >> num;

        if (num == 0)
            break;

        s = to_string(num);
        for (int i = 0; i < s.length(); i++) {
            sum++;
            if(s[i] == '1')
                sum += 2;
            else if (s[i] == '0')
                sum += 4;
            else
                sum += 3;
        }

        cout << sum + 1 << '\n';

        sum = 0;
    }

    return 0;
}