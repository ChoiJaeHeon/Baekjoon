#include <iostream>
#include <cstring>

using namespace std;

int recount = 0;

int recursion(const char *s, int l, int r){
    recount++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){

    int rep;
    int res;
    char s[1001];

    cin >> rep;

    for (int i = 0; i < rep; i++) {
        cin >> s;
        res = isPalindrome(s);
        if (res == 1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
        cout << recount << '\n';
        recount = 0;
    }
}