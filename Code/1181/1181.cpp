#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main(void) {
    int num;
    vector<string> a;
    string s;

    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> s;
        a.push_back(s);
    }

    // 중복된 문자열 제거
    sort(a.begin(), a.end(), compare);
    a.erase(unique(a.begin(), a.end()), a.end()); //unique 함수는 중복된 원소들을 뒤로 뺴주고 그 중복된 원소들이 시작하는 위치를 반환한다.

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << '\n';
    }
    return 0;
}