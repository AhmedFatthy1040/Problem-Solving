#include <bits/stdc++.h>
using namespace std;

const int c = (1e5) + 9;

int Shape2() {
    int n, i, j, k, spaces, stars = 1;
    cin >> n;
    spaces = n - 1;

    for(i = 0; i < n; i++) {
        for(j = 0; j < spaces; j++)
            cout << " ";
        for(k = 0; k < stars; k++)
            cout << "*";

        cout << "\n";
        spaces--;
        stars += 2;
    }

    return 0;
}