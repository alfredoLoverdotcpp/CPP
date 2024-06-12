// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    
    string reverseWord(string str){
        stack <char> myStack;
        
        for(int i=0; i<str.length(); i++){
            myStack.push(str[i]);
        }
        for(int i=0; i<str.length(); i++){
            str[i] = myStack.top();
            myStack.pop();
        }
        return str;
    }
};

int main() {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.reverseWord(s) << endl;
}
