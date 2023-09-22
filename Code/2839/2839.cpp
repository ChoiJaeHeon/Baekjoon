#include <iostream>
using namespace std;

int main() {
    int weight;
    int x = 0;
    int sum = 2000;
    int temp = 0;

    cin >> weight;
    while(3 * x <= weight) {
        int y = 0;
        while(3 * x + 5 * y <= weight) {
            if((3 * x + 5 * y) == weight) {
                temp = x + y;
                if (temp < sum)
                    sum = temp;
            }
        y++;
        }
        x++;
    }

    if (sum == 2000)
        cout << -1;
    else
        cout << sum;

    return 0;
}