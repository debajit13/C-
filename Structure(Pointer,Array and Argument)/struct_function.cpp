//program to pass structure as an argument
#include<iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

void print(Point p) {
	cout << p.x << " " << p.y;
}

int main() {
	Point p;
	cout << "Enter the x co-ordinate: ";
	cin >> p.x;
	cout << "Enter the y co-ordinate: ";
	cin >> p.y;
	print(p);
	return 0;
}
