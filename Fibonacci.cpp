#include <iostream>
using namespace std;

//Gives the sequence till n numbers
vector<int> generateFibonacciNumbers(int n) {
    vector<int>fibo;
    if(n<=0)
        return fibo;
        fibo.push_back(0);
    if(n<=1)
        return fibo;
        fibo.push_back(1);
    for(int i=2; i<n; i++)
    {
        int nextNum=fibo[i-1]+fibo[i-2];
        fibo.push_back(nextNum);
    }
    return fibo;
}

//Gives the sequence till n+2 numbers
// int main() {
//     int n;
//     cin >> n;
//    int a =0;
//    int b =1;
//    cout << a << " " << b << " ";
//    for (int i =1; i<=n;i++){
//        int nextNum = a+b;
//        a = b;
//        b = nextNum;
//        cout << nextNum << " ";
       
//    }
// }
