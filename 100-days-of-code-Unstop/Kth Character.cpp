#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;

    string str;
    cin >> str;

    if (k > 0 && k <= n) {
        int position = n - k;  
        cout << str[position] << endl; 
    } else {
        cout << "" << endl;
    }
    return 0;
}
