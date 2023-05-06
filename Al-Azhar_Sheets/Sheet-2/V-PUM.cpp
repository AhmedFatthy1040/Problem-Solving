#include <bits/stdc++.h>
using namespace std;

const int c = (1e5) + 9;

int PUM() {
    int i, n;
    cin >> n;
    for(i = 1; i <= n * 4; i++) {
        if(i % 4 != 0)
            cout << i << " ";
        else
            cout << "PUM" << "\n";
    }
    return 0;
}
