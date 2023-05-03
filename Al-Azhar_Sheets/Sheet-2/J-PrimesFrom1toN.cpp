
#include <bits/stdc++.h>
using namespace std;
void check(int num) {
    int n = num / 2;
    bool flag = false;
    for(int i = 2; i <= n; i++) {
        if(num % i == 0) {
            flag = true;
            break;
        }
    }
    if(flag == false)
        cout << num << " ";
}
int J() {
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++) {
        check(i);
    }
    return 0;
}