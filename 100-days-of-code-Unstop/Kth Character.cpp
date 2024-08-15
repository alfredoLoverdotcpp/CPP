//Returning the Kth positioned element if the string has to be reversed. 
//We simply subtract the Kth position from the total number of elements, this gives out the Kth element if the array had to be reversed.

/* Sample Testcase 0
Testcase Input
5 2
abdfa
Testcase Output
f
Explanation
The reversed string is:"afdba"


The 2nd character after the reversing the string is f.*/

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
