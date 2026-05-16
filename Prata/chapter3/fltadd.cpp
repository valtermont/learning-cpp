#include <iostream>

int main() {
	using namespace std;
	float a = 2.34E+7f;
	float b = a + 1.0f;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "b - a = " << b-a << endl;
	return 0;
}
