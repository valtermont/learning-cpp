#include <iostream>
#include <cmath>
int main() {
	using namespace std;
	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more. ";	
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
	double x;
	x = sqrt(6.25);
	cout << x;
	return 0;
}
