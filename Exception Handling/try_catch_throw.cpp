// program to use exception handling in c++
#include<iostream>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;
	try {
		if(y == 0)
			throw 0;
		cout << "Result is: " << x/y << endl;
	}
	catch(int n) {
		cout << "Division by zero" << endl;
	} 
	return 0;
}
