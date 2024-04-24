#include<bits/stdc++.h>
using namespace std;

int fibno(int n){
    if(n < 1){
        return -1;
    }
    else if(n == 1 || n == 2){
        return 1;
    }
    else {
        int a = 1;
        int b = 1;
        int c;

        
        for(int i = 3; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main() {
    while (true) {
        int n;
        cin >> n;

        cout << "Hi! I am " << fibno(n) << ". I am at position " << n << "\n";
    }
    return 0;
}
