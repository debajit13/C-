// program to store the members using array like notation
#include<iostream>
using namespace std;

struct Student {
	int roll_no;
	string name;
	string address;
};

int main() {
	Student s = {78, "Debajit", "Jalpaiguri"};
	cout << s.roll_no << " " << s.name << " " << s.address;
	return 0;
}
