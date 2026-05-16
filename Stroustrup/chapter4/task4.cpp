#include "../std_lib_facilities.h"

int main()
{	
	char c;	
	while (c != '|') {
		cout << "Enter 2 values:" << endl;
		double a, b;
		cin >> a;
		cout << "1-st value: " << a << endl;
		cin >> b;
		cout << "2-nd value: " << b << endl;
		if (a == b) {
			cout << "equals value: " << a << "=" << b << '\n';
		} else {
			cout << "highest value: " << (a < b ? b : a) << endl;
			cout << "smallest value: " << (a < b ? a : b) << endl;
		}		
		cout << "Enter | for exist or another key for continue... ";
		cin >> c;
	}
}
