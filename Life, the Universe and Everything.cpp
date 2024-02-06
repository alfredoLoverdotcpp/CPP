//Keep accepting inputs, output all of them sequentially but end it when 42 occurs

#include <iostream>
using namespace std;

int main() {
	int n;
	while(1)
	{
		cin >>n;
		if(n==42)
		break;
		else
		cout << n <<endl;
	}

	return 0;
}
