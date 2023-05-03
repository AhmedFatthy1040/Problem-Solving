#include <bits/stdc++.h>
using namespace std;

int L() {
    int a, b, x, i;
    cin >> a >> b;
    x = max(a, b);
    for(i = x; i > 0; i--) {
        if(a % i == 0 && b % i == 0) {
            cout << i;
            break;
        }
    }
    return 0;
}