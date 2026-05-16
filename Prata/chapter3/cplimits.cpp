#include <iostream>
#include <climits>
int main() {
	using namespace std;
	int n_max = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	cout << "char is " << sizeof(char) << " bytes." << endl;
	cout << "short is " << sizeof(short) << " bytes." << endl;
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "long is " << sizeof(long) << " bytes." << endl;
	cout << "unsigned int is " << sizeof(unsigned int) << " bytes." << endl;
	cout << "long long is " << sizeof(long long) << " bytes." << endl;
	cout << "unsigned long long is " << sizeof(unsigned long long) << " bytes." << endl;
	
	
	cout << endl << "Maximum values:" << endl;
	cout << "int: " << n_max << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "unsigned int: " << UINT_MAX << endl;
	cout << "long long: " << LONG_LONG_MAX << endl;
	cout << "unsigned long long: " << ULONG_LONG_MAX << endl;
	cout << "char: " << CHAR_MAX << endl;
	
	cout << endl << "Minimum int value = " << INT_MIN << endl;
	cout << "Minimum short value = " << SHRT_MIN << endl;
	cout << "Minimum long value = " << LONG_MIN << endl;
	cout << "Minimum long long value = " << LONG_LONG_MIN << endl;
	cout << "Minimum char value = " << CHAR_MIN << endl;
	
	cout << endl << "Bits per byte = " << CHAR_BIT << endl;	
}
