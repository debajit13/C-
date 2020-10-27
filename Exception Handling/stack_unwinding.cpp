// implement stack unwinding in exception handling
#include<iostream>
using namespace std;

int f1() throw(int) {
	cout << "f1 Begins\n";
	throw 100;
	cout << "f1 Ends\n";
}

int f2() throw(int) {
	cout << "f2 Begins\n";
	f1();
	cout << "f2 Ends\n";
}

void f3() throw(int) {
	cout << "f3 Begins\n";
	try {
		f2();
	}
	catch(int i) {
		cout << "Exception caught\n";
	}
	cout << "f3 Ends\n";
}

int main() {
	f3();
	cout << "Bye\n";
	return 0;
}

