#include <bits/stdc++.h>
using namespace std;
const int c = (1e5) + 9;
int main() {
    string s;
    cin >> s;
    int cnt = 0;
    int n = s.length();
    int k = n - 1, i = 0;
    char reversedString[c];
    for(i = 0; i < n; i++) {
        reversedString[k] = s[i];
        k--;
    }
    for(i = 0; i < n; i++) {
        if(reversedString[i] == '0')
            cnt++;
        else
            break;
    }
    if(s == reversedString)
        cout << reversedString << "\n" << "YES";
    else {
        for(i = cnt; i < n; i++) {
            cout << reversedString[i];
        }
        cout << "\nNO";
    }
    return 0;
}