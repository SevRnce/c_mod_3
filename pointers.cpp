#include<iostream>

//Standard namespace declaration
using namespace std;

//Main Function
int main()
{
	int a;
	int b;
	int c;
	int* arr = new (nothrow) int[3];

	for (int i = 0; i < 3; i++) {
		cout << "Enter a number: ";
		cin >> arr[i];
	}

	cout << "From pointer: ";
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}

	a = arr[0];
	b = arr[1];
	c = arr[2];

	cout << "\nFrom variables: " << a << " " << b << " " << c;

	delete[] arr;
}
