//program to pass pointer of structure
#include<iostream>
using namespace std;

struct Person {
	string name;
	string address;
};

int main() {
	Person p = {"Debajit", "JPG"};
	Person *ptr = &p;
	cout << ptr->name << endl; 
	ptr->name = "John";
	cout << p.name << endl;
	return 0;
}
