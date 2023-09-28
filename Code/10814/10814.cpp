#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}
int main() {

    int num;
    int age;
    string name;

    cin >> num;

    vector<pair<int, string>> a;

    for (int i = 0; i < num; i++) {
        cin >> age >> name;
        a.push_back({age, name});
    }

    stable_sort(a.begin(), a.end(), compare); //stable_sort는 같은 값들의 순서를 보장해준다, 반면 일반 sort는 같은 요소들이 있을떄 티는 안나지만 요소간의 순서가 바뀔수도 있다

    for (int i = 0; i < a.size(); i++) {
        cout << a[i].first << " " << a[i].second << '\n';
    }

    return 0;
}