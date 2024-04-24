#include <iostream>
using namespace std;
int Maximum (int x, int y)
//Pass by Value -> this function gets the copies of 'a' and 'b', 
//whilst the comparison, no changes will be reflected in the original 'a' and 'b' values
{
	return(x>y?x:y);
}
void Swap(int &x, int &y)
//Pass by Reference -> Swap function gets the memory addresses (pointers) of 'a' and 'b', 
//any changes in this function will directly reflect in original 'a' and 'b' variables
{
	int z;

	z=x;
	x=y;
	y=z;
}
int main()
{
	int test, a, b, r;

	cin >> test;
	cin >> a >> b;
	
	switch (test)
	{
	case 1:
		r = Maximum(a, b);
		cout << r;
		break;

	case 2:
		Swap(a, b);
		cout << a << " " << b;
		break;
		
	default:
		cout << "Invalid test option";
	}
	return 0;
}
