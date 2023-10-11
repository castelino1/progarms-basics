#include <iostream>
using namespace std;

int main()
{


	int number;
	cout << "please enter a whole number";
	cin >> number;
	if (number % 2 == 0) {
		cout << "number is even";
	}
	else {
		cout << "num is odd";
	}
}