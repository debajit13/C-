//program to implement union
#include<iostream>
using namespace std;

union Point {
	int x;
	int y;
};

int main() {
	Point p;
	p.x = 10;
	cout << p.x << " " << p.y << endl;
	p.y = 20;
	cout << p.y << " " << p.y << endl;
	cout << sizeof(p);	// sizeof union is equal to the largest member present in that union
	return 0;
}
