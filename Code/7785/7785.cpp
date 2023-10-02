#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    string key, value;
    cin >> num;

    map<string, string, greater<string>> map;

    for (int i = 0; i < num; i++) {
        cin >> key >> value;
        if (value == "enter")
            map.insert(pair(key, value));
        else
            map.erase(key);
    }

     for(auto it : map){
      cout << it.first << "\n";
    }

    return 0;
}