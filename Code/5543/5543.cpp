#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int b1, b2, b3, d1, d2;
    vector<int> burger;
    vector<int> drink;

    cin >> b1 >> b2 >> b3 >> d1 >> d2;

    burger.push_back(b1);
    burger.push_back(b2);
    burger.push_back(b3);

    drink.push_back(d1);
    drink.push_back(d2);

    sort(burger.begin(), burger.end());
    sort(drink.begin(), drink.end());

    cout << burger[0] + drink[0] - 50;


    return 0;
}