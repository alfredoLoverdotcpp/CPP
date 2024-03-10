#include<bits/stdc++.h>
using namespace std;

string compareIfElse(int a, int b) {
    if (a > b) 
	{
        return "greater";
    } 
	else if (a < b) 
	{
        return "smaller";
    } 
	else 
	{
        return "equal";
    }
}

int main() {
    while (true){
    int num1, num2;
    cin >> num1 >> num2;
    
    string comparison = compareIfElse(num1, num2);
    cout << comparison << endl;
    }
    return 0;
}
