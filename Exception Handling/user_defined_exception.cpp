// program to create user defined exceptions
#include<iostream>
using namespace std;

class ArraySizeZeroException {
	
};

class ArraySizeNegativeException {
	
};

int average(int arr[], int n) {
	if(n == 0)
		throw ArraySizeZeroException e1;
	if(n < 0)
		throw ArraySizeNegativeException e2;
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += arr[i];
	return sum/n;
}

int main() {
	int n;
	cin >> n;
	int *arr = new int(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	try {
		int res = average(arr, n);
		cout << res;
	}
	catch(ArraySizeZeroException &e1) {
		cout << "Array size is zero";
	}
	catch(ArraySizeNegativeException &e2) {
		cout << "Array size is negative";
	}
	delete[] arr;
	arr = NULL;
	return 0;
}


