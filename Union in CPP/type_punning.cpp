// Convert one type to another without explicit convertion
#include<iostream>
using namespace std;

union Test0 {
	int x;
	float y;
};

union Test1 {
	int a;
	char bin[4];
};

int main() {
	Test0 t0;
	Test1 t1;
	
	t0.y = 1.1;
	t1.a = 512;
	
	cout << t0.x << endl;
	cout << (int)t1.bin[0] << " " << (int)t1.bin[1] << " " << (int)t1.bin[2] << " " << (int)t1.bin[3] << endl;
	
	return 0;
}
