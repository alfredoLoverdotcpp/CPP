#include<bits/stdc++.h>
using namespace std;

int dataTypes(string type) {
	if (type == "Integer")
		return 4;
	else if (type == "Long")
		return 8;
	else if(type == "Float")
		return 4;
	else if (type == "Double")
		return 8;
	else if (type == "Character")
		return 1;
	else
	    return -1;
}
int main () {

	string data;
	cin >> data;
	cout << dataTypes(data);
	return 0;
}
