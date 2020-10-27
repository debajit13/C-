// program to understand dynamically allocated variables
#include<iostream>
using namespace std;

int *fun() {
	int *ptr = new int;
	*ptr = 10;
	return ptr;
}

int main() {
	int x,y;
	cout << *fun() << endl;
	return 0;
}
