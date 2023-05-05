#include <bits/stdc++.h>
using namespace std;

const int c = (1e5) + 9;

bool check(int num, int a, int b);
int getSumOfDigits(string str);

int SomeSums() {
    int i, n, a, b, sum = 0;
    cin >> n >> a >> b;
    for(i = 1; i <= n; i++) {
        stringstream str;
        str << i;
        string numInString = str.str();
        if(check(getSumOfDigits(numInString), a, b))
            sum += i;
    }
    cout << sum;
    return 0;
}

int getSumOfDigits(string str) {
    int i, result = 0;
    for(i = 0; i < str.size(); i++) {
        result = result + (int)(str[i] - '0');
    }
    return result;
}

bool check(int num, int a, int b) {
    if(a > b)
        swap(a, b);
    if(num >= a && num <= b)
        return true;
    else
        return false;
}