// program to use a simple sturct
#include<iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	struct Point P;
	P.x = 10;
	P.y = 20;
	cout << P.x << " " << P.y << endl;
	return 0;
}
