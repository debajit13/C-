// program to pass structure as argument using references
#include<iostream>
using namespace std;

struct Student {
	string name;
	int roll_no;
	int standard;
};

void print(Student &s) {
	cout << s.name << " " << s.roll_no << " " << s.standard << endl;
}

int main() {
	Student s = {"Debajit", 78, 3};
	print(s);
	return 0;
}
