#include <iostream>
#include <set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int rep;
    int num;
    string s;
    set<int> ans;

    cin >> rep;

    for (int i = 0; i < rep; i++) {
        cin >> s;
        if ( s == "add") {
            cin >> num;
            ans.insert(num);
        }
        else if (s == "remove") {
            cin >> num;
            ans.erase(num);
        }
        else if (s == "check") {
            cin >> num;
            if (ans.find(num) == ans.end())
                cout << 0 << '\n';
            else
                cout << 1 << '\n';
        } 
        else if (s == "toggle") {
            cin >> num;
            if (ans.find(num) == ans.end())
                ans.insert(num);
            else
                ans.erase(num);
        }
        else if (s == "all") {
            ans.clear();
            for (int i = 1; i <= 20; i++) {
                ans.insert(i);
            }
        } 
        else if (s == "empty") 
            ans.clear();
    }
    return 0;
}